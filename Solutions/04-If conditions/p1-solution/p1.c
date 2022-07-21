/**
 * @file p1.c
 * @author Mohamed Wx (gtlyco205@gmail.com)
 * @brief 01-If Condition-Solution.
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
    float input_number;

    /* Get the user input */
    printf("\n Enter a number: ");
    scanf("%f", &input_number);
    
    /* Do the operation */
    /*
        Using math proberty [-inf, 0], [0, +inf] (Intervals belong to Real Numbers)
    */
    if( (input_number < 0) )
    {printf("\n You entered negative number.");} /* Print the result */
    else if( (input_number >= 0) )
    {printf("\n You entered positive number.");} /* Print the result */
    else
    {printf("\n Invalid input.");} /* Print the result */

    printf("\n");
    return 0;
}
//!=============================> .END
