/**
 * @file p10.c
 * @author Mohamed Wx (gtlyco205@gmail.com)
 * @brief 10-If Condition-Solution.
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
    int   input_number1; 
    float input_number2;

    float result = 0.0f;

    /* Get the user input */
    printf("\n Enter CUSTOMER NO. and UNITS consumed: ");
    scanf("%d", &input_number1);
    scanf("%f", &input_number2);

    /* Do the operation */
    /*
        Conditions 
        [0, 200]:  result    = 0.50 * N
        [201, 400]: result   = 100 + (0.65 * N)
        [401, 600]:  result  = 230 + (0.80 * N)
        [601, +inf]:  result = 390 + (1.00 * N)

    */

    if( (input_number2 >= 0) && (input_number2 <= 200) )
    {
        result = 000 + (input_number2 * 0.50);

        /* Print the result */
        printf("\n Customer No. %d:", input_number1);
        printf("\n  Charges = %.2f", result);
    }
    else if( (input_number2 >= 201) && (input_number2 <= 400) )
    {
        result = 100 + (input_number2 * 0.65);

        /* Print the result */
        printf("\n Customer No. %d:", input_number1);
        printf("\n  Charges = %.2f", result);
    }
    else if( (input_number2 >= 401) && (input_number2 <= 600) )
    {
        result = 230 + (input_number2 * 0.80);

        /* Print the result */
        printf("\n Customer No. %d:", input_number1);
        printf("\n  Charges = %.2f", result);
    }
    else if( (input_number2 >= 601) )
    {
        result = 390 + (input_number2 * 1.00);

        /* Print the result */
        printf("\n Customer No. %d:", input_number1);
        printf("\n  Charges = %.2f", result);
    }
    else
    { printf("\n Invalid input."); } /* Print the result */

    printf("\n");
    return 0;
}
//!=============================> .END
