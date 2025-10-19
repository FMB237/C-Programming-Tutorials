//This program will be designed for the learning of the used of function in C programming


/*Stutcure of a Funtion in C

return_type function_name(parameter1, parameter2, ...) {
    // code to execute
    return value;
}

                        */

#include<stdio.h>
#include<string.h>

//So let create an addition and a multiplication function

float sum(float a,float b){
    return a+b;
}
float product(float a,float b){
    return a*b;
}

float diff(float a,float b){
    return a-b;
}

int main(){
    float x,y;
    printf("Enter a value for x :");
    scanf("%f",&x);
    printf("Enter a value for y :");
    scanf("%f",&y);

    printf("Sum = %.2f\n",sum(x,y));
    printf("Differcent = %.2f\n",diff(x,y));
    printf("Product = %.2ff\n",product(x,y));

    return 0;
}
