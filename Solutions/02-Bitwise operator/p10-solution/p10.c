/**
 * @file p10.c
 * @author Mohamed Wx (gtlyco205@gmail.com)
 * @brief 10-Bitwise-Solution.
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

// Function that convert Decimal to binary
int decToBinary(int n)
{
    // Size of an integer is assumed to be 32 bits
    for (int i = 31; i >= 0; i--) {
        int k = n >> i; //right shift
        if (k & 1) // helps us know the state of first bit
            printf("1");
        else
            printf("0");
    }
}

//!=============================> .MAIN (Entry point)
int main(void)
{   
    /* Variables Declaration */
    int input_number;
    
    int temporary_buffer;
    
    /* Get the user input */
    printf("\n Enter any number: ");
    scanf("%d", &input_number);

    /* Do the operation */
    /*
        Algorithm used: Masking
        1- By using the Bitwise NOT '~'.

        Assume: 8-bit 
        Using Bitwise NOT operator: ~(11110101): (11110101)
    */

    // O(1) 
    temporary_buffer = input_number;
    input_number = ~(input_number);

    /* Printing the result */
    printf("\n Original number = %d (in decimal)", temporary_buffer);
    printf("\n Number after bits are flipped = %d (in decimal)", input_number);

    printf("\n");
    return 0;
}
//!=============================> .END
