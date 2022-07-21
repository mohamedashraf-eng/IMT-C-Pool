/**
 * @file p8.c
 * @author Mohamed Wx (gtlyco205@gmail.com)
 * @brief 08-If Condition-Solution.
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
#include <math.h>

/*
----------------------------------------------------------------
!-                      DEFINED G VARIABLES                    -
----------------------------------------------------------------
*/

//!=============================> .MAIN (Entry point)
int main(void)
{   
    /* Variables Declaration */
    float input_number_angle1, input_number_angle2, input_number_angle3;

    float total = 0.0f;

    /* Get the user input */
    printf("\n Enter three angles of triangle: ");
    scanf("%f", &input_number_angle1);
    scanf("%f", &input_number_angle2);
    scanf("%f", &input_number_angle3);

    /* Do the operation */
    /*
        Triangle is valid if (Angle1 + Angle2 + Angle3 <= 180) 
        if angles is < 0 so it's invalid input .
    */

    // Using abolute value to neglect the negative error.
    total = abs(input_number_angle1) + abs(input_number_angle2) + abs(input_number_angle3);

    if( (total <= 180) && (total >= 1) )
    { printf("\n Triangle is valid.");} /* Print the result */
    else
    { printf("\n Triangle isn't valid.");} /* Print the result */

    printf("\n");
    return 0;
}
//!=============================> .END
