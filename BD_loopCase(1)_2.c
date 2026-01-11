#include <stdio.h>

int main (){

    int n, x;
    long long factorial = 1, sum = 0;
    scanf ("%d", &n);
    
    for (x= 1; x <= n; x ++){
        factorial = factorial * x;
        sum += factorial;
    }
    printf ("%lld", sum);

    return 0;

}