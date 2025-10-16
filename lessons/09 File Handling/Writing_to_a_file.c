//This is simple code i will write into a file using the C programming language

#include<stdio.h>

int main(void){
    FILE *fp;
    fp=fopen("data.txt","w"); //the w means we are in write mode so we can modified the file contain

    if(fp==NULL){
      printf("Error opening file\n");
      return 1;
    }

//Now print print the file in 
fprintf(fp,"Hello i'm Miguel Bruce \n");
fprintf(fp,"This is me first file Written in C\n ");

  //Let close our file using the fclose command
  fclose(fp);
  printf("Data was successfully written into data.txt\n");
  

    return 0;
}