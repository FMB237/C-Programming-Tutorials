//In this code i we gonna see all what we need to know about input from Users

#include<stdio.h>

int main(){
    int a;
    float b;
    
    printf("Enter a value for a :");
    scanf("%d",&a);
    printf("Enter a value for b: ");
    scanf("%f",&b);
    printf("a is %d and b is %.2f\n",a,b);
    return 0;
}