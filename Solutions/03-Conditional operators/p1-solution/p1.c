/**
 * @file p1.c
 * @author Mohamed Wx (gtlyco205@gmail.com)
 * @brief 01-Conditional Operators-Solution.
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
    int input_number1, input_number2, input_number3;

    int maximum = 0;

    /* Get the user input */
    printf("\n Enter three numbers: ");
    scanf("%d", &input_number1);
    scanf("%d", &input_number2);
    scanf("%d", &input_number3);

    /* Do the operation */
    (input_number1 > maximum) ? // If.
                                (maximum = input_number1) : // Else.
                                                            (maximum = maximum); // Keep it.
    (input_number2 > maximum) ? // If.
                                (maximum = input_number2) : // Else.
                                                            (maximum = maximum); // Keep it.
    (input_number3 > maximum) ?  // If.
                                (maximum = input_number3) : // Else.
                                                            (maximum = maximum); // Keep it.

    /* Print the result */
    printf("\n Maximum between %d, %d and %d = %d", input_number1, input_number2, input_number3, maximum);

    printf("\n");
    return 0;
}
//!=============================> .END
