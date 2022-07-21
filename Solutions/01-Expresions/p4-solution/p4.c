/**
 * @file p4.c
 * @author Mohamed Wx (gtlyco205@gmail.com)
 * @brief 04-Expresions-Solution.
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
    int variable_1, 
        variable_2;

    /* Get the user input */
    printf("\n First number: ");  scanf("%d", &variable_1);
    printf("\n Second number: "); scanf("%d", &variable_2);
    
    /* Do the swap */
    // Using XOR swapping mechanism. (?Method: 2)
    variable_1 ^= variable_2;
    variable_2 ^= variable_1;
    variable_1 ^= variable_2;

    /* Print the numerical result */
    printf("\n After swapping. \n");
    printf("\n First  number: %d", variable_1);
    printf("\n Second number: %d", variable_2);

    printf("\n");
    return 0;
}


//!=============================> .END
