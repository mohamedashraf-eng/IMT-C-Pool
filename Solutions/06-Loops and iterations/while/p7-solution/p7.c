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

    /* Get the user input */
    printf("\n Enter the number: ");
    scanf("%d", &input_number);

    /* Do the operation */
    /*
        Algorithm: O(N)
            - Prime numbers if it's only divisible by itself and 1.
            - Using flag.
    */

    // O(N) N: the number.
    int i = (input_number - 1); // Range [2, n-1].

    while( ((input_number%i) != 0) && (i >= 2) )
    {
        i--;
    }
    
    /* Print the result */
    if( (i > 2) )
    { printf("\n This number isn't prime."); } 
    else
    { printf("\n This number is prime."); }

    printf("\n");
    return 0;
}
//!=============================> .END
