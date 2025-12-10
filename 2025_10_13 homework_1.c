#include <stdio.h>

int main (){

    int x,a,b,c;
    scanf ("%d", &x);
    c = x % 10;
    b = (x / 10) % 10;
    a = x / 100;
    printf ("%d %d %d",c, b, a);
    return 0;

}