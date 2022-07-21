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

    int first_digit = 0, last_digit = 0, 
        number_of_digits = 0, sum = 0;

    /* Get the user input */
    printf("\n Enter any number to find sum of first and last digit: ");
    scanf("%d", &input_number);

    /* Do the operation */
    /*
        Algorithm: O(1) Method 1
            To find the first digit: (Number  / pow(10, 0))   % 10.
            To find the last digit: (Number  / pow(10, n-1)) % 10. n: number of digits.

        Algorithm: O(N) Method 2
            To find the first digit: (Number % 10): (12345 % 10) = 5.
            to find the last digit: We have to iterate till the number == 10. (For the tens position)
    */

    // O(N) N: Number of digits.
    first_digit  = (input_number % 10);

    while( (input_number >= 10) )
    {
        input_number = (input_number / 10);
    }

    last_digit = input_number;

/*
    // O(1) Algorithm.
    number_of_digits = floor(log10(abs(input_number))) + 1;

    first_digit = (input_number / pow(10, (0)) );
    first_digit = first_digit % 10;

    last_digit  = (input_number / pow(10, (number_of_digits-1)) );
    last_digit  = last_digit % 10;
*/

    /* Print the result */
    sum = (first_digit + last_digit);
    printf("\n Sum of first and last digit: %d", sum);

    printf("\n");
    return 0;
}
//!=============================> .END
