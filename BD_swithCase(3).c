#include <stdio.h>

int main (){

    int month;
    scanf ("%d", &month);

    if (month >= 1 && month <= 12){
        
        switch (month){
            case 12: case 1: case 2: printf ("winter");
            break;

            case 3: case 4: case 5: printf ("spring");
            break;

            case 6: case 7: case 8: printf ("summer");
            break;

            case 9: case 10: case 11: printf ("autuam");
            break; 
        }
        
    } else {
        printf ("wrong input");
    }
     
    return 0;
}