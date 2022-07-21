/**
 * @file p5.c
 * @author Mohamed Wx (gtlyco205@gmail.com)
 * @brief 05-Expresions-Solution.
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
    float number_1, 
          number_2;

    float multiplication; 

    /* Get the user input */
    printf("\n Enter the first number: ");  scanf("%f", &number_1);
    printf("\n Enter the second number: "); scanf("%f", &number_2);
    
    /* Calculate the multiplication */
    multiplication = (number_1 * number_2);

    /* Print the result */
    printf("\n Result = %.2f", multiplication);
    
    printf("\n");
    return 0;
}


//!=============================> .END
