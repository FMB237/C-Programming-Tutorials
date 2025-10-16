//Struct are like custom data types
//So instead of using 3 seperated variables we can used a struct to store thsi variables in it

//Exemple

#include<stdio.h>
#include<string.h>


int main(){

  struct Student{ //I gonna used this to store the infomations about a student 
    char name[50];
    int age;
    float mark;
};
//With this now we can create a varibles that is 
struct  Student s1;

//Now let assign the values to this

strcpy(s1.name,"Miguel");
s1.age=21;
s1.mark=16.5;
  
printf("My Name is %s i'm %d years old and i have scored %.1f at the text\n",s1.name,s1.age,s1.mark);

return 0;
}

