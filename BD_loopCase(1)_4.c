#include <stdio.h>
#include <math.h>

int main (){

    int n = 2, sign = 1;
    float sigama, curPi = 0.0, prePi = 0.0;
    scanf ("%f", &sigama);

    do {
        sign = -sign;
        prePi += sign * 4 * 1.0/(2*n-1); 
        n ++;
        sign = -sign;
        curPi = prePi + sign * 4 * 1.0/(2*n-1);
    } while ( fabs (curPi - prePi) >= sigama);
        
    printf ("%d", n);
    return 0;
    
}