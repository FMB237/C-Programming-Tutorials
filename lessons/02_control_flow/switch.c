//This code is written so that i can learn how the case switching is been used in C

#include<stdio.h>

int main(){
    int day;
    printf("Enter a number (1-7) : ");
    scanf("%d",&day);
    switch (day)
    {
    case 1:
        printf("Monday\n");
        break;

    case 2:
    printf("Tuesday\n");
    break;
    
    case 3:
    printf("Wesdnesday\n");
    break;

    case 4:
    printf("Thursday\n");
    break;

    case 5:
    printf("Friday\n");
    break;
     
    case 6:
    printf("Saturday\n");
    break;

    case 7:
    printf("Sunday\n");
    break;
   
    default:
    printf("Invalid day \n");
        break;
    }
    return 0;
}