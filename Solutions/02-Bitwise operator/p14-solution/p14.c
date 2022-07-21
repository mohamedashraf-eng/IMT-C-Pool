/**
 * @file p14.c
 * @author Mohamed Wx (gtlyco205@gmail.com)
 * @brief 14-Bitwise-Solution.
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
    
    int mask = 1; 

    /* Get the user input */
    printf("\n Enter any number: ");
    scanf("%d", &input_number);


    /* Do the operation */
    /*
        Algorithm: (Popular Method)
        1- Using the binary odd/even property.  Even number (LSB: 0), Odd number (LSB: 1)
        2- By masking it with 1.

        Assume 8-bit
        number: (00000110) (6) 
        (number & 1): (00000110) & (00000001) = 0 ==> EVEN.
        number: (00000111) (7) 
        (number & 1): (00000111) & (00000001) = 0 ==> ODD.
    */

    // O(1)
    if( (input_number & mask) == 0)
    {
        /* Printing the result */
        printf("\n %d is even.", input_number);
    }
    else
    {
        /* Printing the result */
        printf("\n %d is odd.", input_number);
    }

    printf("\n");
    return 0;
}
//!=============================> .END
