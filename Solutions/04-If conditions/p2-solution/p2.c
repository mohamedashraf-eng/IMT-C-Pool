/**
 * @file p2.c
 * @author Mohamed Wx (gtlyco205@gmail.com)
 * @brief 02-If Condition-Solution.
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
    float input_number_a, input_number_b, input_number_c;

    float temporary = 0.0f, 
          equation1 = 0.0f, equation2 = 0.0f;

    /* Get the user input */
    printf("\n Enter the value a: ");
    scanf("%f", &input_number_a);
    printf("\n Enter the value b: ");
    scanf("%f", &input_number_b);
    printf("\n Enter the value c: ");
    scanf("%f", &input_number_c);

    /* Do the operation */
    /*
        Conditions: 
        -if a = 0, b = 0. No solution
        -if a = 0, One root
        -if b2-4ac < 0. No roots
        -Else. Two roots
    */

    temporary = ( pow(input_number_b, 2) - (4 * (input_number_a * input_number_c)) );

    if( (input_number_a == 0) && (input_number_b == 0) )
    { printf("\n No solution."); }

    else if( (input_number_a == 0) )
    { printf("\n Only one root."); }

    else if( (temporary < 0) )
    { printf("\n No roots."); }

    else
    {
        equation1 = ( -input_number_b + pow((pow(input_number_b, 2) - \
                    (4 * (input_number_a * input_number_c))), 0.5) )  / (2 * input_number_a);
        equation2 = ( -input_number_b - pow((pow(input_number_b, 2) - \
                    (4 * (input_number_a * input_number_c))), 0.5) )  / (2 * input_number_a);

        printf("\n Equation1[x1]: %.1f", equation1);
        printf("\n Equation2[x2]: %.1f", equation2);
    }

    printf("\n");
    return 0;
}
//!=============================> .END
