/*
    Author: Mohamed Wx
    Date: 7/7/2022
    Subject: IMT - C pool problem 0. Solution
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
    int input_number, power;

    int number_of_digits = 0, result = 1;

    /* Get the user input */
    printf("\n Enter the number: ");
    scanf("%d", &input_number);

    printf("\n Enter a power: ");
    scanf("%d", &power);

    /* Do the operation */
    /*
        Algorithm: O(N).
        - Keep iterating and multiply the number by itself n times. (n: Power)
    */

    // O(N) N: the power.
    int i = 0;
    while( (i < power) )
    {
        result = (result * input_number);
        i++;
    }

    /* Print the result */
    printf("\n Answer: %d", result);

    printf("\n");
    return 0;
}
//!=============================> .END
