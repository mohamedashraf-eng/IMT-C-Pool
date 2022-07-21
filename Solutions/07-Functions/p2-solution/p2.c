/**
 * @file p2c
 * @author Mohamed Wx (gtlyco205@gmail.com)
 * @brief 02-Functions-Solution.
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
!-                      DECLARED FUNCTIONS                     -
----------------------------------------------------------------
*/

/* Do the operation */
void MaximumMinimum(int number1, int number2)
{
    int maximum, minimum;

    (number1 >= number2) ? // If.
                        (maximum = number1, minimum = number2) : // Else.
                                                                (maximum = number2, minimum = number1);

    printf("\n Maximum: %d \
            \n Minimum: %d", maximum, minimum);

    return;
}

//!=============================> .MAIN (Entry point)
int main(void)
{   
    /* Variables Declaration */
    float input_number1, input_number2;

    /* Get the user input */
    printf("\n Enter any two numbers: ");
    scanf("%f", &input_number1);
    scanf("%f", &input_number2);

   
    /* Print the reslt */
    MaximumMinimum(input_number1, input_number2);
    
    printf("\n");
    return 0;
}
//!=============================> .END
