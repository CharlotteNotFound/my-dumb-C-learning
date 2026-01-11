#include <stdio.h>

int main (){

    int n, each, sum = 0;
    scanf ("%d", &n);

    while (n != 0){
        each = n%10;
        sum += each;
        n /= 10;
    }
    printf ("%d", sum);
    
    return 0;
}