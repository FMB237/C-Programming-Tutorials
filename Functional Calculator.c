//This is a code for a calculator including functions in it using the 

//1.Let declare our libraries

#include<stdio.h>
#include<string.h>

//2.Declear our functions
float sum(float a,float b){
    return a+b;
}
float diff(float a,float b){
    return a-b;
}
float product(float a,float b){
    return a*b;
}
float Quot(float a,float b){
    if (b!=0)
    {
       return a/b;
    }
    else{
        printf("Divison by Zero ");
        return 1;
    }
    
}

//3.Main program

int main(void){
    float num1,num2;
    char operation;//For selecting my operations
    printf("Enter a value for num1 :");
    scanf("%f",&num1);
    printf("Enter a value for  num2:");
    scanf("%f",&num2);
    printf("Select and operation (+,-,*,/):");
    scanf(" %c",&operation); //The space before the %c is important

    switch (operation)
    {
    case '+':
        printf("Sum = %.2f\n",sum(num1,num2));
        break;

    case '-':
    printf("Differcent = %.2f\n",diff(num1,num2));
    break;

    case '*':
    printf("Product = %.2f\n",product(num1,num2));
    break;

     case '/':
    printf("Quotient = %.2f\n",Quot(num1,num2));
    break;

    default:
    printf("Invalid operaion\n");
        break;
    }
    return 0;

} 