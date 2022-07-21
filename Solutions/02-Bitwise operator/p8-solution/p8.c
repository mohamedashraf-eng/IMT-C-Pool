/**
 * @file p8.c
 * @author Mohamed Wx (gtlyco205@gmail.com)
 * @brief 08-Bitwise-Solution.
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
    
    int size_of_int = (sizeof(int) * 8), bit_position = 0xFFFFFFFF, 
        mask = 1, temporary_buffer = 0;

    /* Get the user input */
    printf("\n Enter any number: ");
    scanf("%d", &input_number);

    /* Basic case handling */
    if( (input_number < 0) ) // O(1)
    {
        printf("\n Highest order set bit in %d is %d", input_number, size_of_int);
        return 0;
    }
    else if( (input_number == 0) ) // O(1)
    {
        printf("\n No higher order ones found in %d", input_number);
        return -1;
    }
    else;

    /* Do the operation */
    /*
        Algorithm used: Masking
        1- Keep shifting right the number while masking it with one.
        2- Return the last successful masked n.

        Assume: 8-bit 
        buffer: (00001010) -> Let buffer = (Number >> i:0) => (00001010) .. (00000101) .. i++
        Mask:   (00000000) -> Let mask   = 1               => (00000001) .. (00000001) ..
                                                (n)&(mask) => (00000000) .. And so on  ..
        So we keep iterating till the ANDING result equal valid num. 
    */

    // O(N) N: Number of bits. 
    int i;
    for(i = 0; i < size_of_int; i++)
    {
        temporary_buffer = (input_number >> i);
        /*
        // Useful for debugging. (Track the process) 
        decToBinary(temporary_buffer); 
        printf("\n");
        decToBinary(mask);
        printf("\n-----------------------------------\n"); 
        */

        if( (temporary_buffer & mask) )
            bit_position = i;
    }

    /* Printing the result */
    printf("\n Highest order set bit in %d is %d", input_number, bit_position);

    printf("\n");
    return 0;
}
//!=============================> .END
