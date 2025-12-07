#include <stdio.h>
#include <math.h>
int n, a ;
float b, sum, s =0;
void doubleTotal (int n){

    for (a = 1; a < n; a++){

        if (a % 3 == 0 && a % 7 == 0){

            b = 1.0 / a;
            sum += b;
            s = sqrt (sum);
            printf ("%.3f", s);

        } 

    }

}
int main (){

    scanf ("%d", &n);
    doubleTotal (n);
    return 0;

}
