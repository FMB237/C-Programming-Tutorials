//This is a simpleLogin System in C
//For this i gonna include some strings and chaines and characters
#include<stdio.h>
#include<string.h>
int main(void){
    char password[]="Th@9Sand";
    char Trier[10];
    printf("Enter your password:");
    scanf("%s",&Trier);
    if (strcmp(Trier,password) == 0) //Using strcmp to Compare 2 strings
    {
        printf("Access granted\n");
     }
     else{
        printf("Access denied\n");
     }
     return 0;
     
}

