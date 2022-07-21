/**
 * @file p9.c
 * @author Mohamed Wx (gtlyco205@gmail.com)
 * @brief 09-Bitwise-Solution.
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
    
    int size_of_int = (sizeof(int) * 8), leading_zeros_num = 0, 
        mask = 1, temporary_buffer = 0;

    /* Get the user input */
    printf("\n Enter any number: ");
    scanf("%d", &input_number);

    /* Basic case handling */
    if( (input_number < 0) ) // O(1)
    {
        printf("\n Total number of leading zeros in %d is %d", input_number, leading_zeros_num);
        return 0;
    }
    else if( (input_number == 0) ) // O(1)
    {
        printf("\n Total number of leading zeros in %d is %d", input_number, size_of_int);
        return -0;
    }
    else;

    /* Do the operation */
    /*
        Algorithm used: Masking
        1- Keep shifting right the number while masking it with one.
        2- Return the last successful masked n.

        Assume: 8-bit 
        buffer: (00001010) -> Let buffer = (Number >> i:8) => (00000000) .. (00000000) .. i--
        Mask:   (00000000) -> Let mask   = 1               => (00000001) .. (00000001) ..
                                                (n)&(mask) => (00000000) .. And so on  .. 
        Keep increasing the "leading_zeros_num" variable till the first leading one found.
    */

    // O(N) N: Number of bits. 
    int i;
    for(i = size_of_int-1; i > 0; i--)
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
            break;
        else
            leading_zeros_num++;
    }

    /* Printing the result */
    printf("\n Total number of leading zeros in %d is %d", input_number, leading_zeros_num);

    printf("\n");
    return 0;
}
//!=============================> .END
