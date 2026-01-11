#include <stdio.h>

int main (){

    int i = 1, j = 1, num, sum = 0, m, n, count = 3;
    scanf ("%d%d", &m, &n);

    for (; count <= n; count ++){
        num = i + j;
        i = j;
        j = num;

        if (count >= m){
            sum += num;
        }
    }

    printf ("%d", sum);

    return 0;

}