/**
 * @file p3.c
 * @author Mohamed Wx (gtlyco205@gmail.com)
 * @brief 03-Conditional Operators-Solution.
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
    int input_number;

    /* Get the user input */
    printf("\n Enter any year: ");
    scanf("%d", &input_number);
    
    /* Do the operation */
    /*
        Leap year conditions:
                        If  (year%100 != 0) and (year%4   == 0)
                        OR  (year%400 == 0).
        Otherwie its common year.
    */
    ( ( (input_number%4 == 0) && (input_number%100 != 0) ) || (input_number%400 == 0) ) ? // If. 
                                                                                        printf("\n LEAP YEAR") : // Else.
                                                                                                                printf("\n COMMON YEAR");

    printf("\n");
    return 0;
}
//!=============================> .END
