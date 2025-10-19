//let try the sum of natural numbers in C
#include<stdio.h>
#include<string.h>

int main(void){
  int n, sum=0;
  printf("Enter a value for n :");
  scanf("%d",&n);

   for (int i = 1; i <= n; i++) {
        sum += i;  // same as sum = sum + i
    }

  printf("The sum of the first %d natural numbers is: %d\n", n, sum);

  return 0;
}
