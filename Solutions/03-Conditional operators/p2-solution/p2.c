/**
 * @file p2.c
 * @author Mohamed Wx (gtlyco205@gmail.com)
 * @brief 02-Conditional Operators-Solution.
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
    int input_number;

    /* Get the user input */
    printf("\n Enter any number to check even or odd: ");
    scanf("%d", &input_number);
    
    /* Do the operation */
    ((input_number%2) == 0) ? // If. 
                            printf("\n The number is EVEN") : // Else.
                                                            printf("\n The number is ODD");

    printf("\n");
    return 0;
}
//!=============================> .END
