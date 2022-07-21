/**
 * @file p15.c
 * @author Mohamed Wx (gtlyco205@gmail.com)
 * @brief 15-Bitwise-Solution.
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
    
    int size_of_int = (sizeof(int) * 8), mask = 1, temporary_buffer; 

    /* Get the user input */
    printf("\n Enter any number: ");
    scanf("%d", &input_number);

    /* Do the operation */
    /*
        Algorithm:
        1- Left shift the number while iterating. 
        2- Mask the number with 1. and detect if the LSB is 0 or 1.

        Assume 8-bit
        number: (00001010)
        size: 8, i: 0
        (numer >> size-i): (00000000).. & (00000001) = (00000000)
        So detected a 0.
        And so on.
    */

    /* Print the result */
    printf("\n Converted binary: ");

   int i;
   for(i = 0; i <= size_of_int; i++)
   {
        temporary_buffer = (input_number >> (size_of_int - i));

        // Using TERNARY operator.
        (temporary_buffer & 1) ? // If.      
                                printf("1") : // Else. 
                                            printf("0");
   }

    printf("\n");
    return 0;
}
//!=============================> .END
