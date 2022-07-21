/**
 * @file p3.c
 * @author Mohamed Wx (gtlyco205@gmail.com)
 * @brief 03-Expresions-Solution.
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

    int temp; // Temporary storage for the swapping.

    /* Get the user input */
    printf("\n First number: ");  scanf("%d", &variable_1);
    printf("\n Second number: "); scanf("%d", &variable_2);
    
    /* Do the swap */
    // Using basic swapping mechanism. (?Method: 1)
    temp = variable_1;
    variable_1 = variable_2;
    variable_2 = temp;

    /* Print the numerical result */
    printf("\n After swapping. \n");
    printf("\n First  number: %d", variable_1);
    printf("\n Second number: %d", variable_2);

    printf("\n");
    return 0;
}


//!=============================> .END
