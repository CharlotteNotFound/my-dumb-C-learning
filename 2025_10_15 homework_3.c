#include <stdio.h>

int main (){

    int a, b, s, upHundred;
    scanf ("%d%d", &a, &b);
    s = a*a + b*b;

    if (s >= 100){
        upHundred = s/100;
        printf ("%d", upHundred);
    } else {
        printf ("%d", s);
    }

    return 0;
    
}