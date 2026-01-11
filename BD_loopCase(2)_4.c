#include <stdio.h>

int main (){

    int S = 0, n = 0, m;
    scanf ("%d", &m);

    while (S <= m){
        n ++;
        S += n;
    }
    printf ("%d", n);

    return 0;

}