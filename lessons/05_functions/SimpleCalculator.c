//This is a simple Calculator i will but in C 

#include<stdio.h>
int main(){
    float a,b;
    float sum,diff,pro,quot;
    printf("Enter two number :");
    scanf("%f %f",&a,&b);
    
    sum=a+b;
    diff=a-b;
    pro=a*b;
    if(b!=0){
        quot=a/b;
    }else{
        printf("Error Division by 0");
        return 1;
    }
printf("\nResults\n");
printf("Sum = %.2f\n",sum);
printf("Diff = %.2f\n",diff);
printf("Product = %.2f\n",pro);
printf("Quotient = %.2f\n",quot);
 
return 0;

}