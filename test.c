/*#include <stdio.h>

int main (){

    float x, y = 0.0;
    scanf ("%f", &x);

    if (x < 0){
        y = 2 * x + 1;
    }
    
    else if (x == 0){
        y = 0;
    }

    else {
        y = 2 * x -1;
    }

    printf ("%f", y);
}*/




/*#include <stdio.h>
int main (){

    int arr[10] = {0};
    int posiNum = 0, zeroNum = 0, negaNum = 0;
    printf ("please enter 10 numbers\n");

    for (int i = 0; i < 10; i ++){
        scanf ("%d", &arr[i]);
    }

    for (int i = 0; i < 10; i ++){
        if (arr[i] > 0){
            posiNum ++;
        } 
        else if (arr[i] == 0){
            zeroNum ++;
        }
        else {
            negaNum ++;
        }

    }

    printf ("%d %d %d", posiNum, zeroNum, negaNum);
    return 0;
}*/




/*#include <stdio.h>

int main (){

    int oddNumSum = 0;

    for (int i = 1; i <= 1000; i ++){

        if ((i % 2) == 1){
            oddNumSum += i;
        }
    }

    printf ("%d", oddNumSum);
    return 0;
}*/




/*#include <stdio.h>

int main(){

    int arr[10] = {0};
    int posiNum = 0, zeroNum = 0, negaNum = 0;

    printf ("Please input 10 numbers:\n");
    
    for (int i = 0; i < 10; i ++){
        scanf ("%d", &arr[i]);
    }
    
    for (int i = 0; i < 10; i ++){

        if (arr[i] > 0){
            posiNum ++;
        }

        else if (arr[i] == 0){
            zeroNum ++;
        }

        else {
            negaNum ++;
        }
    }
    printf ("%d %d %d", posiNum, zeroNum, negaNum);
    return 0;
}*/




/*#include <stdio.h>

int getMax (int n){

    int max = 0;
    int a, b, c;

    a = n % 10;
    b = (n / 10) % 10;
    c = n / 100;

    if (a>=b && b>=c){
        max = a * 100 + b * 10 + c;
    }
    else if (a>=c && c>=b){
        max = a * 100 + c * 10 + b;
    }
    else if (b>=a && a>=c){
        max = b * 100 + a * 10 + c;
    }
    else if (b>=c && c>=a){
        max = b * 100 + c * 10 + a;
    }
    else if (c>=a && a>=b){
        max = c * 100 + a * 10 + b;
    }
    else {
        max = c * 100 + b * 10 + a;
    }

    return max;
}

int main (){
    int n, max = 0;

    scanf ("%d", &n);

    max = getMax (n);

    printf ("%d", max);

    return 0;
}*/




/*#include <stdio.h>

double getSum (int n){
    int denomi1 = 1, denomi2 = 2, denomi3;
    double sum = 1.5;

    for (int i = 3; i <= n; i ++){

        denomi3 = denomi1 + denomi2;
        denomi1 = denomi2;
        denomi2 = denomi3;
        sum += 1.0 / denomi3;

    }

    return sum;
}

int main (){
    int n;
    double sum;
    scanf ("%d", &n);

    sum = getSum (n);

    printf ("%.4lf", sum);

    return 0;
}*/




/*#include <stdio.h>
char getMax (){

    char letterNow, letterMax = '\0';

    while ((letterNow = getchar ()) != '#'){

        if (letterNow > letterMax){
            letterMax = letterNow;
        } 
    }

    letterMax -= 32;
    return letterMax;
}

int main (){

    char max;
    printf ("please enter a string end with '#'\n");

    max = getMax ();

    printf ("%c", max);

    return 0;
}*/

/*#include <stdio.h>

int main (){
    int n, max = 0, mNum = 0;
    double sum = 0.0, avg = 0.0;
    scanf ("%d", &n); 

    int arr[n];  
    for (int i = 0; i < n; i ++){

        scanf ("%d", &arr[i]);
    }

    for (int i = 0; i < n; i ++){

        if (arr[i] >= max){
            max = arr[i];
            mNum = i + 1;
        }

        sum += arr[i];
        avg = sum / n;
    }
    
    printf ("%d ", mNum);
    printf ("%d ", max);
    printf ("%.0lf", avg);

    return 0;

}*/




/*#include <stdio.h>

int main (){

    char each = '\0';
    int countNum = 0;

    while ((each= getchar ()) != '#'){
        
        if (each >= '0' && each <= '9'){
            countNum ++;
        }
    }

    printf ("%d", countNum);

    return 0;
}*/




/*#include <stdio.h>

int main (){

    int n, denomi;
    float Total = 0.0;
    scanf ("%d", &n);

    for (int i = 1; i <= n; i ++){

        denomi += i;
        Total += 1.0 / denomi;

    }

    printf ("Total=%.4f", Total);

    return 0;

}*/




#include <stdio.h>

int main (){

    int n, sum = 0, sign = 1, num = 1;
    scanf ("%d", &n);

    for (int i = 1; i <= n; i ++){
        sum += sign * num;
        num += 2;
        sign = -sign;
    }

    printf ("%d", sum);

    return 0;
}