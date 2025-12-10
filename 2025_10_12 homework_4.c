#include <stdio.h>
#include <math.h>

int main (){

    double x, y, z, d;
    scanf ("%lf%lf%lf", &x, &y, &z);
    d = sqrt (x*x + y*y + z*z);
    printf ("%lf", d);
    return 0;
    
}