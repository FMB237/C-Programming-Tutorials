//Let try to print even number from 0 to 20 using a for loop

#include<stdio.h>

int main(void){
    
    for (int i = 0; i <=20; i++)
    {
       if (i % 2 == 0 )
       {
        printf("Count :%d\n",i);
       }
       
    }
    return 0;
    
}