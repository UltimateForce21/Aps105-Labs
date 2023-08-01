#include <stdio.h>

int main(void){
    int num;
    int sigdig;
    int nextdig;
    int nextnextdig;
    int leastdig;

    int quotient;

    printf("Enter number to convert ot base 2: ");
    scanf("%d", &num);

    quotient = num;

    if(quotient % 2 == 0){
        leastdig = 0;
    }
    else{
        leastdig = 1;
    }

    quotient = quotient/2;

    if(quotient % 2 == 0){
        nextnextdig = 0;
    }
    else{
        nextnextdig = 1;
    }
    
    quotient = quotient/2;

    if(quotient % 2 == 0){
        nextdig = 0;
    }
    else{
        nextdig = 1;
    }

    quotient = quotient/2;
    
    if(quotient % 2 == 0){
        sigdig = 0;
    }
    else{
        sigdig = 1;
    }

    printf("The four digits of that number are as follows:\n");

    printf("Most significant digit: %d\n", sigdig);
    
    printf("Next digit: %d\n", nextdig);
    
    printf("Next digit: %d\n", nextnextdig);
    
    printf("Least significant digit: %d\n", leastdig);
    
    return 0;


}