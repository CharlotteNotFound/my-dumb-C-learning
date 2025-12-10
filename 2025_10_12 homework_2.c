#include <stdio.h>

int main (){

    char lower, upper;
    scanf ("%c", &lower);
    upper = lower - 32;
    printf ("%c%c", lower, upper);
    return 0;
    
}