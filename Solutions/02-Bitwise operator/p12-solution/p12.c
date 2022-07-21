/**
 * @file p12.c
 * @author Mohamed Wx (gtlyco205@gmail.com)
 * @brief 12-Bitwise-Solution.
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
    int input_number, input_rotation;
    
    int size_of_int = (sizeof(int) * 8), rotation;

    /* Get the user input */
    printf("\n Enter a number: ");
    scanf("%d", &input_number);

    printf("\n Enter number of rotation: ");
    scanf("%d", &input_rotation);

    /* Do the operation */
    /*
        Algorithm:
        1- Shifting the number n times.
        2- Add the LSB/MSB Shifted. (Depends on the direction) 
    */

    /* Print the result */
    rotation = ( (input_number << input_rotation) | (input_number >> (size_of_int - input_rotation)) );
    printf("\n %d left rotated %d times = %d ", input_number, input_rotation, rotation);

    rotation = ( (input_number >> input_rotation) | (input_number << (size_of_int - input_rotation)) );
    printf("\n %d right rotated %d times = %d ", input_number, input_rotation, rotation);

    printf("\n");
    return 0;
}
//!=============================> .END
