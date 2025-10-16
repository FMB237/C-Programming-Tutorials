//This is a small exercise on the used of pointers in other to swap the value of 2 varaibles

#include<stdio.h>
#include<string.h>

//Let crate a function to swap the values of our input 
void swap(int *x,int *y){
    int temp=*x;
    *x=*y;
    *y=temp;
}


int main(){
    int a,b;
    int *pa=&a;
    int *pb=&b;
    printf("Enter a value of a :");
    scanf("%d",&a);
    printf("Enter a value for b :");
    scanf("%d",&b);
  printf("Before swapping a =%d and b=%d\n",a,b);

  swap(&a,&b);//Calling the swapping function

 printf("After  swapping a =%d and b=%d\n",a,b);

    return 0; 
}