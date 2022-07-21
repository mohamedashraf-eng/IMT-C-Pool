/**
 * @file p2.c
 * @author Mohamed Wx (gtlyco205@gmail.com)
 * @brief 02-Do While-Solution.
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

    float sum = 0.0f;

    /* Do the operation */
    do
    {   
        /* Get user input */
        printf("Enter a number: ");
        scanf("%f", &input_number);

        sum += input_number;

    } while( (input_number != 0) );

    printf("\n Sum = %.2f", sum);

    printf("\n");   
    return 0;
}
//!=============================> .END
