#include <stdio.h>
int n, a, sum = 0;
void Total(int n){

    while (n != 0){
        a = n%10;
        sum += a;
        n /= 10;
    }
    printf("%d",sum);

}

int main(){
    
    scanf("%d", &n);
    Total(n);
    
}