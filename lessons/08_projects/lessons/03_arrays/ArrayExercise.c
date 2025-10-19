//This code is  for a small exercise in C 

#include<stdio.h>
#include<string.h>

int main(void){
    int i,n;
    

    printf("Enter the number of Students :");
    scanf("%d",&n);

    int score[n];

    for ( i = 0; i < n; i++)
    {
        printf("This Student has Scored %d:",i+1);// The %d is for the number of students
        scanf("%d",&score[i]);
    }
    
    //Now let initials the max and the min 

    int max = score[0];
    int min = score[0];

    //Let insert the conditions 

   for ( i = 0; i < n; i++)
   {
    if(score[i] > max){
        max=score[i];
    }
    if(score[i]< min){
        min=score[i];
    }
   }

   // Display results
    printf("\nHighest score = %d\n", max);
    printf("Lowest score  = %d\n", min);
   

    return 0;
}