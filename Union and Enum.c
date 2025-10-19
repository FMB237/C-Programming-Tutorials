#include <stdio.h>
#include <string.h>

union Value {
    int i;
    float f;
    char strings[20];
};

enum DataTypes { INT = 1, FLOAT, STRINGS };

int main() {
    enum DataTypes data;
    union Value value;

    printf("\n=== Union and Enum ===\n");
    printf("Select a Data Type:\n");
    printf("1. Integer\n");
    printf("2. Float\n");
    printf("3. String\n");
    printf("Make your choice: ");
    scanf("%d", &data);

    switch (data) {
        case INT:
            printf("Enter an integer: ");
            scanf("%d", &value.i);
            printf("You entered the integer: %d\n", value.i);
            break;

        case FLOAT:
            printf("Enter a float: ");
            scanf("%f", &value.f);
            printf("You entered the float: %.2f\n", value.f);
            break;

        case STRINGS:
            printf("Enter a string: ");
            scanf("%s", value.strings);
            printf("You entered the string: %s\n", value.strings);
            break;

        default:
            printf("Invalid choice.\n");
            break;
    }

    return 0;
}
