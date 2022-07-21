/**
 * @file p0.c
 * @author Mohamed Wx (gtlyco205@gmail.com)
 * @brief 00-Conditional Operators-Solution.
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
    int input_number1, input_number2;

    int maximum;
    /* Get the user input */
    printf("\n Enter two numbers: ");
    scanf("%d", &input_number1);
    scanf("%d", &input_number2);

    /* Do the operation */
    (input_number1 > input_number2) ? // If. 
                                    (maximum = input_number1) : // Else.
                                                                (maximum = input_number2);

    /* Print the result */
    printf("\n Maximum between %d and %d is %d", input_number1, input_number2, maximum);

    printf("\n");
    return 0;
}
//!=============================> .END
