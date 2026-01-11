#include <stdio.h>

int main (){

    int a, b, bStill, mayFactor = 0;
    scanf ("%d%d", &a, &b);

    if (a < b){
        bStill = b;
        b = a;
        a = bStill;
    }

    mayFactor = a % b;
    if (mayFactor == 0){
        printf ("%d", b);

    } else {
        while (mayFactor != 0){
            a = b;
            b = mayFactor;
            mayFactor = a % b;
        }
        printf ("%d", b);
    }
    
    return 0;

}