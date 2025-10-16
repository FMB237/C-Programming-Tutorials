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


    //Let me used pointers again for a small recall

    int y =50;
    int *p=&y;//This pointer will store the value of y
    printf("The value of y is: %d\n" ,y);
    printf("The value Pointed by y is :%p\n",&y);

    //Let change the value of y 
    *p=75;
    printf("The new value of y is :%d\n",y);

    


    return 0 ;
}