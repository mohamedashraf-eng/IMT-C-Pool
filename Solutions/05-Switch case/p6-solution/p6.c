/**
 * @file p6.c
 * @author Mohamed Wx (gtlyco205@gmail.com)
 * @brief 06-Switch Case-Solution.
 * @version 0.0
 * @date 2022-07-07
 * 
 * @copyright Copyright Wx (c) 2022
 * 
 */
//!=============================> .START
/*
----------------------------------------------------------------
!-                       INCLUDED HEADERS                      -
----------------------------------------------------------------
*/

#include <stdio.h>
#include <math.h>

/*
----------------------------------------------------------------
!-                      DEFINED G VARIABLES                    -
----------------------------------------------------------------
*/

//!=============================> .MAIN (Entry point)
int main(void)
{   
    /* Variables Declaration */
    char  input_operator;
    float input_number1, input_number2; 

    float result = 0.0f;

    /* Get the user input */
    printf("\n Enter an operator (+, -, *, /): ");
    scanf("%c", &input_operator);

    printf("\n Enter two operands: ");
    scanf("%f", &input_number1);
    scanf("%f", &input_number2);

    /* Do the operation */
    switch(input_operator)
    {
        case '+': 
                result = ( input_number1 + input_number2 ); 

                /* Print the result */
                printf("\n %.1f + %.1f = %.1f", input_number1, input_number2, result);
                break;

        case '-':  
                result = ( input_number1 - input_number2 ); 

                /* Print the result */
                printf("\n %.1f - %.1f = %.1f", input_number1, input_number2, result);
                break;

        case '*': 
                result = ( input_number1 * input_number2 ); 

                /* Print the result */
                printf("\n %.1f * %.1f = %.1f", input_number1, input_number2, result);
                break;

        case '/': 
                result = ( input_number1 / input_number2 ); 

                /* Print the result */
                printf("\n %.1f / %.1f = %.1f", input_number1, input_number2, result);
                break;

        default: printf("\n Invalid input."); break;
    }

    printf("\n"); 
    return 0;
}
//!=============================> .END
