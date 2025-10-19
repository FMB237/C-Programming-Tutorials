//This file is been created for me to be able to learn how to read from file freely in C

#include<stdio.h>
#include<string.h>

int main(void){
  FILE *fp;
  FILE *fs;
  char line[100];
  fp=fopen("data.txt","r"); //r means here we are in read mode

  if(fp ==NULL){
    printf("Error when trying opening the file\n");
    return 0;
  }
  //Let try to add content to this file

  fs=fopen("data.txt","a");
  fprintf(fs,"This is a new added content\n");


  while (fgets(line,sizeof(line),fp))
  {
    printf("%s",line);

  }
  
  fclose(fp);
  return 0;
}