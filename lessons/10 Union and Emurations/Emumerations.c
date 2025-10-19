//Enumeartions asigned an interger value to a constant 
//Let take the example below

#include<stdio.h>

enum Days {Sunday,Monday,Thursday,Wesdnesday,Friday,Tuesday,Saturday};

int main(){
    enum Days today =Sunday;

    if(today ==Sunday)
        printf("It is the end of the week\n");
    printf("The Numerical Value of Sunday is %d\n",today);
    
}