/**
 * @file p4.c
 * @author Mohamed Wx (gtlyco205@gmail.com)
 * @brief 04-Switch Case-Solution.
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
    int input_number;

    int conditonal;

    /* Get the user input */
    printf("\n Enter any number to check even or odd: ");
    scanf("%d", &input_number);

    /* Do the operation */
    /*
        Using the property of conditionls. (True/false)

        (2%2 == 0) ? : 1 (True)
        (3%2 == 0) ? : 0 (False)
    */

    conditonal = (input_number%2 == 0);

    switch(conditonal)
    {
        case 0:  printf("\n Number is Odd");    break;
        case 1:  printf("\n Number is Even");   break;
        default: printf("\n Invalid input.");   break;
    }

    printf("\n"); 
    return 0;
}
//!=============================> .END
