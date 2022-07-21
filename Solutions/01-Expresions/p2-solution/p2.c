/**
 * @file p2.c
 * @author Mohamed Wx (gtlyco205@gmail.com)
 * @brief 02-Expresions-Solution.
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
    int number_1, 
        number_2;
    
    float division, 
          reminder; 
    
    /* Get the user input */
    printf("\n Please Enter number 1: "); scanf("%d", &number_1);
    printf("\n Please Enter number 2: "); scanf("%d", &number_2);

    /* Calculate the results */
    division = (number_1 / number_2);
    reminder = (number_1 % number_2);

    /* Print the numerical result */ 
    printf("\n The division: %.0f", division);
    printf("\n The division: %.0f", reminder);

    printf("\n");
    return 0;
}


//!=============================> .END
