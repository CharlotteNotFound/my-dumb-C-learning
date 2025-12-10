#include <stdio.h>

int main (){

    int a, b, c;
    scanf ("%d%d%d", &a, &b, &c);

    if (a+b>c && b-a<c){

        printf ("Yes\n");

        if (a == b){
            printf ("isosceles triangle");
        }
        else if (a*a + b*b == c*c){
            printf ("rightangled triangle");
        }
        else {
            printf ("ordinary triangle");
        }

    } else {

        printf ("No");

    }
    return 0;
}