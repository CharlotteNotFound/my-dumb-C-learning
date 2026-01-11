#include <stdio.h>

int main (){

    int n, x;
    float front = 1, back = 2, sum = 0, frontStill = 1;
    scanf ("%d", &n);

    for (x = 1; x <= n; x ++){
        sum += front / back;
        frontStill = front;
        front = back;
        back = frontStill + back;
    }
    printf ("%.3f", sum);

    return 0;

}