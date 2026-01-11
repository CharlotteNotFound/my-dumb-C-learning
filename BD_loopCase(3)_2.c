#include <stdio.h>

int main (){

    int x = 2, i = 1, factorialRelate, sum = 0;

    for (; x <= 100; x++){

        while (i <= x){

            factorialRelate = x % i;
            i ++;
            
            
            if (factorialRelate == 0 || i == 1){
                sum += x;
            } 
            else if (factorialRelate == 0 || i != 1){
                break;
            }
            
        }
        
    }
    printf ("%d", sum);

    return 0;
}