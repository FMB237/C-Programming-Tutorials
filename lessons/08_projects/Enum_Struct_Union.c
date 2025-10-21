//This project has purpose to used Struct,Union and Emum in the same code

#include<stdio.h>
#include<string.h>

//let Emumerate our data first

enum DataType {INT =1,FLOAT,STRINGS};

//Let Call our union
union Value {

    int i;
    float f;
    char strings[50];
};

//Let declare our struct

struct DataEntry
{
    enum DataType type;
    union Value value;
};

//Let start Building our program

int main(){
    struct  DataEntry entries[10];
    int n;

    printf("How many Entries do you want (max 10) :");
    scanf("%d",&n);

    for (int i = 0; i < n; i++)
    {
       printf("\n===Entry== %d \n",i+1);
       printf("Select a Datatype :\n");
       printf("1.Intergers \n");
       printf("2.Floats \n");
       printf("3.Strings \n");
       printf("Your choice :");
       scanf("%d",(int*)&entries[i].type);


       //Let now swicth cases for our program

       switch (entries[i].type)
       {
       case INT:
       printf("Enter an interger :");
       scanf("%d",&entries[i].value.i);
        break;

        case FLOAT:
        printf("Enter a float :");
        scanf("%f",&entries[i].value.f);
        break;

        case STRINGS:
        printf("Enter a String :");
        scanf("%s",entries[i].value.strings);
        break;
       
       default:
       printf("Invlaid type Skipping");
        break;
       }

    }

       //Now let displayed all entries

       printf("\n===Displaying all Entries===\n");
       for (int i = 0; i < n; i++)
       {
        printf("Entry %d -> ",i+1);
        switch (entries[i].type)
        {
        case INT:
        printf("Interger :%d\n",entries[i].value.i);
        break;

        case FLOAT:
        printf("Float : %.2f\n",entries[i].value.f);
        break;
        
        case STRINGS:
        printf("Strings :%s\n",entries[i].value.strings);    
        break;
            
        
        default:
        printf("Unknown type \n ");
            break;
        }
       }
       
    return 0;
    
}