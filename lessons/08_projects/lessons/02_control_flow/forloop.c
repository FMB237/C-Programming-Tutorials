// This is a simple code for me to learn how to use the for loop in C

#include <stdio.h>

// Count up loop
int main(void)
{
    for (int i = 1; i <= 10; i++) {
        printf("Count: %d\n", i);
    }

    // Count down loop
    for (int j = 10; j >= 1; j--) {
        printf("Count: %d\n", j);
    }

    return 0;
}