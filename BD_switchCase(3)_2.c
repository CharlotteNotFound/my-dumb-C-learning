#include <stdio.h>

int main (){

    int now, type, x;
    scanf ("%d%d%d", &now, &type, &x);

    if (type == 1 || type == 2){

        switch (type){

            case 1: now += x; printf ("%d", now);
            break;

            case 2: now -= x; 
                if (now >= 0){
                    printf ("%d", now);
                } else {
                    printf ("Insufficient Blance");
                }
            break;
        }

    } else {
        printf ("Invalid Operation");
    }

    return 0;
    

}