/**
 * @file p11.c
 * @author Mohamed Wx (gtlyco205@gmail.com)
 * @brief 1-Bitwise-Solution.
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
    
    int size_of_int = (sizeof(int)*8), mask = 1, temporary_buffer = 0,
        number_of_zeros = 0, number_of_ones = 0;
    
    /* Get the user input */
    printf("\n Enter any number: ");
    scanf("%d", &input_number);

    /* Basic error handling */
    if( (input_number == 0) )  // O(1)
    {
        printf("\n Total zero bit is %d", size_of_int);
        printf("\n Total one bit is %d", number_of_ones);

        return 0;
    }
    else;

    /* Do the operation */
    /*
        Algorithm used: Masking
        1- Shift right the number by (i:32)
        2- AND the number with (mask:1)

        Assume 8-bit
        Number: (00001010)
        Mask:   (00000001) 
        if ANDING == 0: number_of_zeros++; 
        else number_of_ones++;
    */

    // O(N) N: Number of bits.
    for(int i = size_of_int; i > 0; i--)
    {
        temporary_buffer = (input_number >> i);

        /*
        // Useful for debugging. (Track the process) 
        decToBinary(temporary_buffer); 
        printf("\n");
        decToBinary(mask);
        printf("\n-----------------------------------\n"); 
        */

        if( (temporary_buffer & mask) == 1)
        { number_of_ones++; }
        else
        { number_of_zeros++; }
    }

    /* Printing the result */
    printf("\n Total zero bit is %d", number_of_zeros);
    printf("\n Total one bit is %d",  number_of_ones);

    printf("\n");
    return 0;
}
//!=============================> .END
