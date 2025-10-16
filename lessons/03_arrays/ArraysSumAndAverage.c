//This program is made for me to calculate the sum and the average of numbers in a chain of characters using the C programming language

#include<stdio.h>
#include<strings.h>

int main(){
    int i,n;
    float avg ,sum=0;

   printf("Enter number of elements :");
   scanf("%d",&n);

   float numbers[n]; //For the variable length arrays

   for ( i = 0; i < n; i++)
   {
   
    printf("Enter numbers : %d\n", i+1);
    scanf("%f",&numbers[i]);
     sum = numbers[i];
   }
      
   avg=sum/n;
   printf("Sum = %.2f\n",sum);
   printf("Average = %.2f\n",avg);

   
   return 0;

}