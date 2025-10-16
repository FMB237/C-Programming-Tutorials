//This is a code used to  print my name

#include<stdio.h>
#include<string.h>

int main(){

    char fistname[20];
    char Lastname[30];

    printf("Enter your Firstname :");
    scanf("%19s",fistname);
    printf("Enter your Lastname :");
    scanf("%29s",Lastname);

    printf("I'm %s %s\n",fistname,Lastname);

    return 0;


}