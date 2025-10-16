//This lessson will talk about the used of arrys in C programming
//What are arrays?
//Arrays are chain of characters or lists
//Let do a small example


#include <stdio.h>
#include <string.h>

int main() {
    int score[5] = {10, 20, 30, 40, 50};
    printf("Address of score[2] = %d\n", &score[2]);
    return 0;
    
}