//Here i gonna used loops with Arrys in C

#include<stdio.h>
#include<string.h>


int main(void){
  int i;
  int score[5]={10,20,30,40,50};

  for ( i = 0; i < 5; i++)
  {
    printf("Score %d =%d\n",i+1,score[i]);
  }

  return 0;

  
}