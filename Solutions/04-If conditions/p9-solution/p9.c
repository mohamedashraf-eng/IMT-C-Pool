/**
 * @file p9.c
 * @author Mohamed Wx (gtlyco205@gmail.com)
 * @brief 09-If Condition-Solution.
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
    float input_number_arm1, input_number_arm2, input_number_arm3;

    /* Get the user input */
    printf("\n Enter three sides of triangle: ");
    scanf("%f", &input_number_arm1);
    scanf("%f", &input_number_arm2);
    scanf("%f", &input_number_arm3);

    /* Do the operation */
    /*
        Conditions 
        If.
        - Equilateral: ( Arm_1 equal Arm_2 and Arm_2 equal Arm_3. ) - (So Arm_1 equal Arm_3) 
        - Scalene:     ( Any for the arms aren't equal. )           - (But valid)
        - Isosceles:   ( Any of the arms are equal. )               - (But not all)
        else. 

    */

    if( (input_number_arm1 == input_number_arm2) && (input_number_arm2 == input_number_arm3) )
    { printf("\n Triangle is equilateral.");} /* Print the result */

    else if( (input_number_arm1 == input_number_arm2 ) || 
             (input_number_arm2 == input_number_arm3)  || 
             (input_number_arm2 == input_number_arm3)
           )
    { printf("\n Triangle is scalene."); } /* Print the result */

    else if( (input_number_arm1 != input_number_arm2 ) &&
             (input_number_arm2 != input_number_arm3)  && 
             (input_number_arm1 != input_number_arm3)
           )
    { printf("\n Triangle is isosceles."); } /* Print the result */

    else
    { printf("\n Triangle isn't valid."); } /* Print the result */

    printf("\n");
    return 0;
}
//!=============================> .END
