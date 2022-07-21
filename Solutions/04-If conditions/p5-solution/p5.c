/**
 * @file p5.c
 * @author Mohamed Wx (gtlyco205@gmail.com)
 * @brief 05-If Condition-Solution.
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

    /* Get the user input */
    printf("\n Enter year: ");
    scanf("%d", &input_number);
    
    /* Do the operation */
    /*
        Leap year conditions:
                        If  (year%100 != 0) and (year%4   == 0)
                        OR  (year%400 == 0).
        Otherwie its common year.
    */

    if( ( (input_number%4 == 0) && (input_number%100 != 0) ) || (input_number%400 == 0) )
    {printf("\n LEAP YEAR.");}
    else    
    {printf("\n NOT EAP YEAR.");}

    printf("\n");
    return 0;
}
//!=============================> .END
