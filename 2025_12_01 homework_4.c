#include <stdio.h>
int n,a,b = 0;
void reverse (int n){

    while (n != 0){

        a = n % 10;
        b = b * 10 + a;
        n /= 10;
    
    }printf ("%d", b);

      
}

int main (){

    scanf ("%d", &n);
    reverse (n);
    return 0;

}