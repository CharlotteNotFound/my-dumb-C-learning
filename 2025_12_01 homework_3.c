#include <stdio.h>
int a,x = 1; 
void yFactor (int x){

    for (a = 1; a < x; a++){

        if (x % a == 0){

            printf ("%d", a);

        }

    }
}

int main (){

    scanf ("%d", &x);
    yFactor(x);

}