#include <stdio.h>
#include <math.h>

int main (){

    float x, y,toRed, toBlue, toGreen;

    scanf ("%f%f", &x, &y);

    toRed = sqrt ((x+2)*(x+2) + y*y);
    toBlue = sqrt ((x-2)*(x-2) + y*y);
    toGreen = sqrt (x*x + (y+2)*(y+2));

    if (toRed<=3 && toBlue>=3 && toGreen>=3){
        printf ("1");
    }
    if (toBlue<=3 && toRed>=3 && toGreen>=3){
        printf ("2");
    }
    if (toGreen<=3 && toRed>=3 && toBlue>=3){
        printf ("3");
    }
    if (toRed<=3 && toBlue<=3 && toGreen>=3){
        printf ("4");
    }
    if (toRed<=3 && toGreen<=3 && toBlue>=3){
        printf ("5");
    }
    if (toGreen<=3 && toBlue<=3 && toRed>=3){
        printf ("6");
    }
    if (toRed<=3 && toGreen<=3 && toBlue<=3){
        printf ("7");
    }
    if (toRed>=3 && toGreen>=3 && toBlue>=3){
        printf ("8");
    }
    
    return 0;

}