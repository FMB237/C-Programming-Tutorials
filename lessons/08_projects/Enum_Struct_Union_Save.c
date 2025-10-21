// Save and load data entries using struct, union and enum

#include <stdio.h>
#include <string.h>

enum Datatype { INT = 1, FLOAT, STRINGS };

union Value {
    int i;
    float f;
    char s[50];
};

struct DataEntry {
    enum Datatype type;
    union Value value;
};

int main(void)
{
    struct DataEntry entries[10];
    int n = 0;
    int existing = 0;
    FILE *fp = NULL;

    /* Load existing entries */
    fp = fopen("data.txt", "r");
    if (fp != NULL) {
        int count = 0;
        int t;
        while (count < 10 && fscanf(fp, "%d", &t) == 1) {
            entries[count].type = (enum Datatype)t;
            switch (entries[count].type) {
            case INT:
                fscanf(fp, "%d", &entries[count].value.i);
                break;
            case FLOAT:
                fscanf(fp, "%f", &entries[count].value.f);
                break;
            case STRINGS:
                fscanf(fp, "%49s", entries[count].value.s);
                break;
            default:
                break;
            }
            count++;
        }
        fclose(fp);
        existing = count;
        if (existing > 0)
            printf("%d entries loaded from file\n", existing);
    }

    int max_new = 10 - existing;
    if (max_new <= 0) {
        printf("Storage full (10 entries).\n");
        return 0;
    }

    printf("How many new entries do you want to add (0 - %d): ", max_new);
    if (scanf("%d", &n) != 1) {
        printf("Invalid number, exiting.\n");
        return 1;
    }
    if (n < 0 || n > max_new) {
        printf("Invalid number of entries.\n");
        return 1;
    }

    /* Read new entries */
    for (int idx = existing; idx < existing + n; idx++) {
        printf("\n=== Entry %d ===\n", idx + 1);
        printf("Select a Datatype:\n1. Integer\n2. Float\n3. String\nChoice: ");
        int choice = 0;
        if (scanf("%d", &choice) != 1) {
            printf("Invalid choice, try again.\n");
            idx--;
            continue;
        }
        if (choice < 1 || choice > 3) {
            printf("Invalid Datatype\n");
            idx--;
            continue;
        }
        entries[idx].type = (enum Datatype)choice;
        switch (entries[idx].type) {
        case INT:
            printf("Enter an integer: ");
            if (scanf("%d", &entries[idx].value.i) != 1)
                entries[idx].value.i = 0;
            break;
        case FLOAT:
            printf("Enter a float: ");
            if (scanf("%f", &entries[idx].value.f) != 1)
                entries[idx].value.f = 0.0f;
            break;
        case STRINGS:
            printf("Enter a string: ");
            if (scanf("%49s", entries[idx].value.s) != 1)
                entries[idx].value.s[0] = '\0';
            break;
        default:
            break;
        }
    }

    int total = existing + n;

    /* Save entries to file (overwrite) */
    fp = fopen("data.txt", "w");
    if (fp == NULL) {
        perror("Failed to open data file for writing");
        return 1;
    }
    for (int i = 0; i < total; i++) {
        fprintf(fp, "%d ", (int)entries[i].type);
        switch (entries[i].type) {
        case INT:
            fprintf(fp, "%d\n", entries[i].value.i);
            break;
        case FLOAT:
            fprintf(fp, "%f\n", entries[i].value.f);
            break;
        case STRINGS:
            fprintf(fp, "%s\n", entries[i].value.s);
            break;
        default:
            fprintf(fp, "\n");
            break;
        }
    }
    fclose(fp);

    /* Display entries */
    printf("\n=== Displaying all entries ===\n");
    for (int i = 0; i < total; i++) {
        printf("Entry %d -> ", i + 1);
        switch (entries[i].type) {
        case INT:
            printf("Integer: %d\n", entries[i].value.i);
            break;
        case FLOAT:
            printf("Float: %.2f\n", entries[i].value.f);
            break;
        case STRINGS:
            printf("String: %s\n", entries[i].value.s);
            break;
        default:
            printf("Unknown type\n");
            break;
        }
    }

    return 0;
}

