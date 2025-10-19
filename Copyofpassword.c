//This program is just of copy of the password attempt program 

#include<stdio.h>
#include<string.h>

int main(void){

    char Password[]="FMB237";
    char Trier[12];
    int attempts=0;
     //Title
    printf("===Bruce Simple Login System===\n");
    //program
    while (attempts < 5)
    {
        printf("Enter your password:");
        scanf("%s",Trier);
        if (strcmp(Trier,Password)==0)
        {
            printf("Access granted\n");
            return 0; //been used to exit the loop
        }
        else{
            attempts++;
            printf("Wrong password! Attempts left %d\n",5-attempts);
        }
        
    }
    printf("Access refuesed User failed to enter a password\n");
    
    return 0;
}