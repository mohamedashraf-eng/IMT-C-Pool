/**
 * @file p2.c
 * @author Mohamed Wx (gtlyco205@gmail.com)
 * @brief 02-Bitwise-Solution.
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
    int input_number, n;

    int mask = 0x00000000; //(Specific for 32-bit)

    /* Get the user input */
    printf("\n Enter any number: ");
    scanf("%d", &input_number);
    
    printf("\n Enter nth bit to check (0-31): ");
    scanf("%d", &n);

    /* Do the operation */
    /*
        Algorithm used: Masking

        1- (int 32bit) 0 -> Left shift 1 to the n place.
        2- Mask the given number using the masked variable.

        Assume 8-bit variable
        variable: (6)   (0b00000110)
        Mask    : (n)   (0b00000010)
        - Doing Bitwise AND
        Result: :       (0b00000010) nth bit set to 1. (Case)
    */
   
    // The Bitwise OR is used to set the number to the old value.
    // Try calculating it. (It will make sense later!)
    mask |= (1 << n); // Shift 1 to the n place (0b10000000000000000000000000000000)

    if( (input_number & mask) == mask) // eqv to (int) 1
    { printf("\n The %d bit is set to 1", n); }     /* Print the result */
    else
    { printf("\n The %d bit is set to 0", n); }     /* Print the result */
        

    printf("\n");
    return 0;
}


//!=============================> .END
