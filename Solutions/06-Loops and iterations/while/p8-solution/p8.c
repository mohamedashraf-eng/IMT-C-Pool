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

    int reversed_number = 0;

    /* Get the user input */
    printf("\n Enter the number: ");
    scanf("%d", &input_number);

    /* Do the operation */
    /*
        Algorithm: O(N)

    */

    // O(N) N: the digits.
    // Reverse the number.
    while( (input_number != 0) )
    {
        reversed_number = (input_number % 10) + (reversed_number * 10);
        input_number    = (input_number / 10);  

        /*
            Tracking the process:
            
            loop starts.     (input_number != 0)
                -00- reversed_number = (12345 % 10) + (0 * 10)    = (5) + (0)     = 5.     & temporary_buffer = (12345 / 10) = (1234).
                -01- reversed_number = (1234 % 10)  + (5 * 10)    = (4) + (50)    = 54.    & temporary_buffer = (1234 / 10) = (123).
                -02- reversed_number = (123 % 10)   + (54 * 10)   = (3) + (540)   = 543.   & temporary_buffer = (123 / 10) = (12).
                -03- reversed_number = (12 % 10)    + (543 * 10)  = (2) + (5430)  = 5432.  & temporary_buffer = (12 / 10) = (1).
                -04- reversed_number = (1 % 10)     + (5432 * 10) = (1) + (54320) = 54321. & temporary_buffer = (1 / 10) = (0).
            loop terminates. (input_number == 0)
        */
    }

    /* Print the result */
    printf("\n The reverse number: %d", reversed_number);


    printf("\n");
    return 0;
}
//!=============================> .END
