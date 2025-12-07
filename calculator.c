
#include <stdio.h>

int main () {

    char operator;

    double num1, num2, result;
    
    printf ("simple calculator\n");

    printf ("support: +, -, *, /\n");

    printf ("please input (like: 2 + 3):");

    scanf ("%1f %c %1f", &num1, &operator, &num2);

    switch (operator) {

        case '+':
            result = num1 + num2;

            printf ( "%.21f + %.21f = %.21f\n", num1, num2, result );

            break;

        case '-':
            result = num1 - num2;

            printf ( "%.21f - %.21f = %.21f\n", num1, num2, result );

            break;

         case '*':
            result = num1 * num2;

            printf ( "%.21f * %.21f = %.21f\n", num1, num2, result );

            break;

         case '/':
            if (num2 !=0){

                result = num1 / num2;

            printf ( "%.21f / %.21f = %.21f\n", num1, num2, result );

             }
             else{
                printf ("error:the divisor cant be 0");
             }

            

            break;
        
        default:
            printf ("error:invalid operator'%c\n");

            printf ("operator we support:+, -, *, /\n");



    }
    return 0;
}
