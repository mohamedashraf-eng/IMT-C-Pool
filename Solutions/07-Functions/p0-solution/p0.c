/**
 * @file p0.c
 * @author Mohamed Wx (gtlyco205@gmail.com)
 * @brief 00-Functions-Solution.
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
float QubeOfNumber(float number)
{
    return (number * number * number);
}

//!=============================> .MAIN (Entry point)
int main(void)
{   
    /* Variables Declaration */
    float input_number;

    float result = 0.0f;

    /* Get the user input */
    printf("\n Enter any number: ");
    scanf("%f", &input_number);

    /* Do the operation */
    result = QubeOfNumber(input_number);

    /* Print the result */
    printf("\n Cube of %.0f is %.2f", input_number, result);
    
    printf("\n");
    return 0;
}
//!=============================> .END
