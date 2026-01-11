#include <stdio.h>

int main (){

    int n, x = 1, sum = 0;
    scanf ("%d", &n);

    for (;x <= n; x ++){

        if (n % x == 0){
            
            if (x != n){
                printf ("%d,", x);
            } else {
                printf ("%d ", x);
            }

            sum += x;
        }
    }
    
    printf ("sum=%d", sum);

    return 0;
}