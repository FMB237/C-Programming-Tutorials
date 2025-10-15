#include<stdio.h>
#include<string.h>

  struct StudentsManagement
  {
   char name[100];
   int age;
   float mark;
  };
  //Ask for how many Students
  int main(void){
    struct StudentsManagement Students[50];
    int n;

    //Let add for students details
    printf("Enter the number of Students :");
    scanf("%d",&n);

    for (int i = 0; i < n; i++)
    {
     printf("\n---Students --- %d\n",i+1);

     printf("Enter Your name : ");
     scanf("%s",Students[i].name);

     printf("Enter your age :");
     scanf("%d",&Students[i].age);

     printf("Enter your mark :");
     scanf("%f",&Students[i].mark);
    }
    

    //Now let display all the Students

    printf("\n===Student List ===\n");
    for (int i = 0; i < n ; i++)
    {
       printf("Students  %d -> Name: %s | Age :%d | mark :%.2f\n",i+1,Students[i].name,Students[i].age,Students[i].mark);
    }
    
  }
  
