//This file is been seyt up to see and help what are pointers and how the works in C programming

//Definition
//A pointer can be defined as a varaible that stores the memory address of another variable
//Exemple

#include<stdio.h>

int main(){
    int x =42;
    int *ptr =&x;

    printf("The value of x : %d\n",x);
    printf("The address of x is : %p\n",&x);
     printf("Pointer ptr holds: %p\n", ptr);
    printf("Value pointed to by ptr: %d\n", *ptr);
    *ptr=60;
    printf("The New value of x is :%d\n",x); //So the pointers works like the ler in Modern Js

    return 0 ;
}