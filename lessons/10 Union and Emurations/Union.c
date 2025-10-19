//Let learn how to used Unions in C

#include<stdio.h>
#include<string.h>

//Let enter our Union
 union  Data
 {
    int i;
    float f;
    char string[20];
 };

 int main(){
   union Data  data;
   
    data.i=10;
    printf("data.i =%d\n",data.i);

   data.f=255.5;
   printf("data.f =%.2f\n",data.f);

// Now data.i will be corrupted because data.f overwrote the memory
  printf("data.i after data.f =%d\n",data.i);

  return 0;
   
 }
 
/*🧩 Key idea: Unions are used when you need to store different types of data but never at the same time
 — useful in memory-sensitive applications (like embedded systems or network packets).*/