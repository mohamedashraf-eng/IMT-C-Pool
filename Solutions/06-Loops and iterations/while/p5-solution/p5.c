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
    int input_number;

    int temporary_variable = 0, sum = 0;

    /* Get the user input */
    printf("\n Enter any number to find sum of its digits: ");
    scanf("%d", &input_number);

    /* Do the operation */
    /*
        Algorithm: O(N)
            To divide the integer into digits: (number % 10) -> (number / 10) -- (iterating till the number == 0)
    */

    // O(N) N: Number of digits.
    while( (input_number != 0) )
    {   
        temporary_variable = (input_number % 10);

        input_number = (input_number / 10);

        sum += temporary_variable;
    }

    /* Print the result */
    printf("\n Sum of digits: %d", sum);

    printf("\n");
    return 0;
}
//!=============================> .END
