/**
 * @file p11.c
 * @author Mohamed Wx (gtlyco205@gmail.com)
 * @brief 11-If Condition-Solution.
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
    float input_number;

    float result = 0.0f;

    /* Get the user input */
    printf("\n Enter basic salary of an employee: ");
    scanf("%f", &input_number);


    /* Do the operation */
    /*
        Conditions:
            1- number <= 10k            : (20%, 80%)
            2- 10.1k <= number <= 20k   : (25%, 90%)
            3- number >= 20.1k          : (30%, 95%)
    */

    if( (input_number <= 10000) )
    {
        result = input_number + ( (input_number * 0.20) + (0.80 * input_number) );

        /* Print the result */
        printf("\n GROSS SALARY OF EMPLOYEE: %.2f", result);
    }
    else if( (input_number >= 10001) && (input_number <= 20000))
    {
        result = input_number + ( (input_number * 0.25) + (0.90 * input_number) );

        /* Print the result */
        printf("\n GROSS SALARY OF EMPLOYEE: %.2f", result);
    }
    else if( (input_number >= 20001) )
    {
        result = input_number + ( (input_number * 0.30) + (0.95 * input_number) );

        /* Print the result */
        printf("\n GROSS SALARY OF EMPLOYEE: %.2f", result);
    }
    else;

    printf("\n"); 
    return 0;
}
//!=============================> .END
