//This is a password attempt game in C

#include<stdio.h>
#include<string.h>

int main(){
    char password[]="Th@9Sand";
    char Trier[12];
    int attempt=0;
 //Title 
 printf("===Simple Login system===\n");

 while (attempt<3)
 {
    printf("Enter your password :");
    scanf("%s",Trier);
    if(strcmp(Trier,password)==0){
        printf("Access granted\n");
        return 0; //exit the program if successful
    }
    else {
       attempt++;
       printf(" Wrong password!,Attempt left %d\n",3-attempt);
    }
 }
 
 printf(" Too many attempt\n ");

 return 0;

    
}