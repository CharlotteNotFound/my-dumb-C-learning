 #include <stdio.h>

#include <math.h>

#define BLUE "\033[34m"

#define RESET "\033[34m"

int main()
{

    double x, y;

    printf (BLUE);

    for (y =2.0; y>=-2.0; y-=0.14)

    {
        for (x =-2.0; x<=2.0; x+=0.04)
        {
            double a =x*x+ y*y-1;

            if (a*a*a-x*x*y*y*y <= 0)
            {
                printf ("*");

            }
            else 
            {
                printf (" ");
            }

        }
        printf ("\n");
    }
    printf (RESET);

    return 0;

}