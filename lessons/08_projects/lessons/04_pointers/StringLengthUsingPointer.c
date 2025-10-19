//This is also an exercise code on how to used strings length using Pointers

#include<stdio.h>

int main(void){
  char string[100];
  char *ptr=string;
  int length=0;

  printf("Enter a string :");
  scanf("%s",string);

  //Let set up a condtion for our string lengths and hwo to used them

  while(*ptr !='\0'){
    ptr++;
    length++;
  }
  printf("The length of the string is %d\n",length);

  return 0;
}