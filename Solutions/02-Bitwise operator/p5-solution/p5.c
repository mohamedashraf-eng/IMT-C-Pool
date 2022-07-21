/**
 * @file p5.c
 * @author Mohamed Wx (gtlyco205@gmail.com)
 * @brief 05-Bitwise-Solution.
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
    
    int temporary_buffer, mask = 0x00000000, //(Specific for 32-bit)
        size_of_int = (sizeof(int) * 8);

    /* Get the user input */
    printf("\n Enter any number: ");
    scanf("%d", &input_number);
    
    printf("\n Enter nth bit to check (0-31): ");
    scanf("%d", &n);

    /* Do the operation */
    /*
        Algorithm used: Masking
        1- (int 32bit) 1 -> Left shift 0 to the n place.
        2- Mask the given number using the masked variable.

        Assume 8-bit variable
        variable: (6)   (0b00000110)
        Mask    : (n)   (0b00000100)
        - Doing Bitwise XOR (Toggling method)
        Result: :       (0b00000010) nth bit set invert state. (Case)
    */

    // Check if the input nth is bigger than size of int (in bits)
    if( (n < size_of_int) )  
    {   
        // The Bitwise OR is used to set the number to the old value.
        // Try calculating it. (It will make sense later!)
        mask |= (1 << n); // Shift 0 to the nth bit.
 
        temporary_buffer = input_number; 

        input_number = ( (mask) ^ (input_number) ); 
        
        /* Print the result */    
        printf("\n Bit cleared successfully.                                          \
                \n Number before clearing %d bit: %d (in decimal)                      \
                \n Number after clearing %d bit: %d (in decimal)", n, temporary_buffer, \
                                                                   n, input_number);     
    }
    
    else
    { printf("\n Input nth is invalid."); }  /* Print the result */
        

    printf("\n");
    return 0;
}
//!=============================> .END
