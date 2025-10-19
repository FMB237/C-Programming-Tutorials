//This exercise has been denied for finding the maximum value in a pointer

#include<stdio.h>
int main(void){
    int arr[5]={8,14,19,27,38};
    int *ptr= arr;//Store the array inside a pointer
    int max= *ptr; //Let assume the first element is the maxptr
    //Let try to add a min value
    int *pts=arr;
    int min=*pts;

    for (  int i = 1; i < 5; i++)
    {
        ptr++;
        if(*ptr >max ){
            max = *ptr;
        }
         pts++;
       if(*pts < min){
        min =*pts;
       }
    }


    //Min loop
   /* for (int  i = 1; i < 5; i++)
    {
       pts++;
       if(*pts < min){
        min =*pts;
       }
    }*/
    
    printf("The maximum value is : %d\n",max);
     printf("The minimum value is : %d\n",min);
    return 0;
    

}