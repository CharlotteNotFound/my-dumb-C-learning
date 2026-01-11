#include <stdio.h>

int main (){

    int N, x = 100, single = 0, tens = 0, hundreds = 0;
    long sum = 0;
    scanf ("%d", &N);

    for (; x <= N; x ++){

        single = x % 10;
        tens = (x/10) % 10;
        hundreds = x / 100;
        sum = single*single*single + tens*tens*tens + hundreds*hundreds*hundreds;
        
        if (sum == x){
            printf ("%d\n", x);
        }
        
    }

    return 0;

}