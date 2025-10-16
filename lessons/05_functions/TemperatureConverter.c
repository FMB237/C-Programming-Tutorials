//This is Temperature converter program
//Formular F=(C*9/5)+32

#include<stdio.h>

int main(){
float temp;
float F;
printf("Enter a temperature :\n");
scanf("%f",&temp);
F=(temp*9/5)+32;
printf("There Temperature in Fahenrein is %.2f\n",F);

return 0;
}