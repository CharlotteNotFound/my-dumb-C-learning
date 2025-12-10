#include <stdio.h>

int main (){

    int x;
    scanf ("%d", &x);

    int by3 = (x%3 == 0);
    int by5 = (x%5 == 0);
    int by7 = (x%7 == 0);

    if (by3 && by5 && by7){
        printf ("can be devided by 3,5 and 7");
    }
    else if ((by3 && by5) || (by3 && by7) || (by5 && by7)){
        if (by3 && by5){
            printf ("can be devided by 3 and 5");
        }
        if (by3 && by7){
            printf ("can be devided by 3 and 7");
        }
        if (by5 && by7){
            printf ("can be devided by 5 and 7");
        }
    }
    else if (by3 || by5 || by7){
        if (by3){
            printf ("can be divided by 3");
        }
        if (by5){
            printf ("can be divided by5");
        }
        if (by7){
            printf ("can be divided by 7");
        }
    }
    else {
        printf ("cannot be divided by 3,5 or 7");
    }
    
    return 0;
    
}