/**
 * @file p6.c
 * @author Mohamed Wx (gtlyco205@gmail.com)
 * @brief 06-Expresions-Solution.
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

    float primeter; 

    /* Get the user input */
    printf("\n Enter the length of the rectangle: ");  scanf("%f", &number_1);
    printf("\nEnter the width of the rectangle: ");    scanf("%f", &number_2);
    
    /* Calculate the multiplication */
    primeter = ( 2 * (number_1 + number_2) );

    /* Print the result */
    printf("\n Primeter of rectangle = %.5f", primeter);
    
    printf("\n");
    return 0;
}


//!=============================> .END
