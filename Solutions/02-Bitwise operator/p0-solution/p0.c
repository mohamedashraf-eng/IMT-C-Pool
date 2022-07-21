/**
 * @file p0.c
 * @author Mohamed Wx (gtlyco205@gmail.com)
 * @brief 00-Bitwise-Solution.
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
    printf("\n Enter any number: ");
    scanf("%d", &input_number);

    /* Do the operation */
    /*
        Algorithm used: Masking
        Assume input: (00001010)
        Assume mask:  (00000001)
        - Doing Bitwise AND
        Result:       (00000000) (case: unset (0)) 
    */
   
    if( (input_number & 0b00000000000000000000000000000001) == 0b00000000000000000000000000000001) // eqv to (int) 1
    { printf("\n LSB of %d is set (1).", input_number); }     /* Print the result */
    else
    { printf("\n LSB of %d is unset (0).", input_number); }     /* Print the result */


    printf("\n");
    return 0;
}


//!=============================> .END
