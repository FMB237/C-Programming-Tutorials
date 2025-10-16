//This had been created to learn the used of pointer with arrays 

#include<stdio.h>
#include<string.h>

int main(){
    //Let declare and array
    int arr[3]={8,14,22};
    int *p=arr; //So let store the arrays inside and pointer

    for ( int i = 0; i < 3; i++)
    {
        printf("Value = %d\n",*(p+i));
    }
    
    int Table[5]={8,14,19,27,33};
    int *t=Table;

    for (int  i = 0; i < 5; i++)
    {
      printf("Table values  = %d\n",*(t+i));
    }
    
    return 0;
}