/**
 * @file p3.c
 * @author Mohamed Wx (gtlyco205@gmail.com)
 * @brief 03-If Condition-Solution.
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
    float input_number_math, input_number_physics, input_number_chemistry;

    float total = 0.0f, total2 = 0.0f;

    /* Get the user input */
    printf("\n Enter the degree for course one: ");
    scanf("%f", &input_number_math);
    printf("\n Enter the degree for course two: ");
    scanf("%f", &input_number_physics);
    printf("\n Enter the degree for course three: ");
    scanf("%f", &input_number_chemistry);

    total  = input_number_math + input_number_physics + input_number_chemistry;
    total2 = input_number_math + (input_number_physics + input_number_chemistry);

    /* Do the operation */
    /*
        conditions:
        -if math >= 65 && physics >= 55 && chemistry >= 50 && total in all three >= 180.
        -if total in math and subjects >= 140. (OR)
    */

    if( (input_number_math >= 65) && (input_number_physics >= 55) && (input_number_chemistry >= 50) && (total >= 180) )
    { printf("\n The candidate is eligible for admission."); }
    else if( (total2 >= 140) )
    { printf("\n The candidate is eligible for admission."); }
    else
    { printf("\n The candidate isn't eligible for admission."); }


    printf("\n");
    return 0;
}
//!=============================> .END
