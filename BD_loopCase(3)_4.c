#include <stdio.h>

int main (){
    int a, n, i = 1, j = 1, each, sum = 0;
    scanf ("%d%d", &a, &n);

    for (; i <= n; i ++){
        each = a;
        for (i = 1; j < i; j++){
            a *= 10;
            each = a + 6;
        }
        sum += each;
    }
    printf ("%d", sum);
}