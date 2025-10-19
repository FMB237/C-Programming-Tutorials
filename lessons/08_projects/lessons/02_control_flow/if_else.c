//This code will be written in other to recall the used of the if conditions in C programming

#include<stdio.h>

int main(){
    int a,b;
    printf("Enter the value of a :");
    scanf("%d",&a);
    printf("Enter the value of b :");
    scanf("%d ",&b);
    //Let add some condtions
     if(a >b){
        printf("a is greater than b \n");
     }
     else if(b > a){
        printf("b is greater than a \n");
     }
     else if(a == b){
        printf("a is equal to b \n");
     }
    return 0;
}