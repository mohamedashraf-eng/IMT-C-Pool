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

    int number_of_digits = 0;

    /* Get the user input */
    printf("\n Enter the number: ");
    scanf("%d", &input_number);

    /* Do the operation */
    /*
        Algorithm: O(N) Method 1.
            - Iterating till the number reaches 0.

        Algroithm: O(1) Method 2.
            - Math equation.
    */

    // O(N) N: the digits.
    while( (input_number != 0) )
    {
        input_number = (input_number / 10);
        number_of_digits++;
    }
/*
    // O(1)
    number_of_digits = floor(log10(abs(input_number))) + 1;
*/
    /* Print the result */
    printf("\n Number of digits: %d", number_of_digits);

    printf("\n");
    return 0;
}
//!=============================> .END
