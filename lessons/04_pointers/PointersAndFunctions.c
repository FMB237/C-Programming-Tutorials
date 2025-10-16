//This program is just a code written in other used pointers in Functions in C programming

#include<stdio.h>
#include<string.h>


    //Let create a function that gonna point the value 
int increment(int *n){
        *n=*n+1;
    }

int main(){
    int value=10;
    increment(&value);
    printf("Value After increment =%d\n",value);
    return 0;
}
