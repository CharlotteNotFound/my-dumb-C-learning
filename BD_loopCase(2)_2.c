#include <stdio.h>
#include <math.h>

int main (){
    int n, i = 1, j = 1, sign = 1;
    double x, numerator = 1.0, denominator = 1.0, sinX = 0;
    scanf ("%lf%d", &x, &n);

    for (; i <= n; i ++){

        numerator = pow (x, (2*i-1));

        for (; j <= (2*i-1); j ++){
            denominator *= j;
        }

        sinX += sign * numerator / denominator;
        sign = -sign;
    }

    printf ("%.8lf", sinX);

    return 0;

}