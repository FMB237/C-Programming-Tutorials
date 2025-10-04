//Let text if a number is been even or odd
#include<stdio.h>

int main(){
    int a;
    printf("Enter a value for a:");
    scanf("%d",&a);
     if(a%2 == 0){
        printf("a is even number\n");
     }
    else{
        printf("a is an odd number\n");
    }
     return 0;
}