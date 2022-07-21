/**
 * @file p13.c
 * @author Mohamed Wx (gtlyco205@gmail.com)
 * @brief 13-Bitwise-Solution.
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
    int input_number1, input_number2;
    
    /* Get the user input */
    printf("\n Enter any two numbers: ");
    scanf("%d", &input_number1);
    scanf("%d", &input_number2);

    printf("\n Original value of num1 = %d", input_number1);
    printf("\n Original value of num2 = %d", input_number2);
    printf("\n");

    /* Do the operation */
    /*
        Algorithm: (Popular Method)
        1- Using bitwise XOR.    

        Assume 8-bit
        number1: (00001010)
        number2: (00001000)

        number1 = number1 ^ number2: (00001010) ^ (00001000): (00000010) (2) -- Random
        number2 = number1 ^ number2: (00000010) ^ (00001000): (00001010) (10)
        number1 = number1 ^ number2: (00000010) ^ (00001010): (00001000) (8)
    */

    // O(1)
    //decToBinary(input_number1); printf(" ^ "); decToBinary(input_number2); printf("\n"); // Track the process.
    input_number1 = input_number1 ^ input_number2; // input_number1 ^= input_number2;
    //decToBinary(input_number1); printf("\n\n"); // Track the process.

    //decToBinary(input_number1); printf(" ^ "); decToBinary(input_number2); printf("\n"); // Track the process.
    input_number2 = input_number1 ^ input_number2; // input_number2 ^= input_number1;
    //decToBinary(input_number1); printf("\n\n"); // Track the process.

    //decToBinary(input_number1); printf(" ^ "); decToBinary(input_number2); printf("\n"); // Track the process.
    input_number1 = input_number1 ^ input_number2; // input_number1 ^= input_number2;
    //decToBinary(input_number1); printf("\n"); // Track the process.


    /* Printing the result */
    printf("\n Num1 after swapping = %d", input_number1);
    printf("\n Num1 after swapping = %d", input_number2);

    printf("\n");
    return 0;
}
//!=============================> .END
