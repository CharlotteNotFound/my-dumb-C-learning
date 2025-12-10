#include <stdio.h>
#include <math.h>

int main (){
    
    float a,b,c,p,e,S;
    scanf("%f%f%f",&a, &b, &c);
    p = (a+b+c) / 2;
    e = p * (p-a) * (p-b) * (p-c);
    S = sqrt (e);
    printf ("%.3f",S);
    return 0;
    
}