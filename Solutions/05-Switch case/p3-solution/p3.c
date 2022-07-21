/**
 * @file p3.c
 * @author Mohamed Wx (gtlyco205@gmail.com)
 * @brief 00-Switch Case-Solution.
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
    int input_number1, input_number2;

    int conditonal;

    /* Get the user input */
    printf("\n Enter two numbers to find maximum: ");
    scanf("%d", &input_number1);
    scanf("%d", &input_number2);

    /* Do the operation */
    /*
        Using the property of conditionls. (True/false)

        (2 > 1): 1 (True)
        (1 > 2): 0 (False)
    */

    conditonal = (input_number1 > input_number2);

    switch(conditonal)
    {
        case 0:  printf("\n %d is maximum.", input_number2); break;
        case 1:  printf("\n %d is maximum.", input_number1); break;
        default: printf("\n Invalid input.");                break;
    }

    printf("\n"); 
    return 0;
}
//!=============================> .END
