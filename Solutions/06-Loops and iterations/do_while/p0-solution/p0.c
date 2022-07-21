/**
 * @file p0.c
 * @author Mohamed Wx (gtlyco205@gmail.com)
 * @brief 00-Do While-Solution.
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

    char condition;

    /* Do the operation */
    do
    {
        /* Get the user input */
        printf("\n Enter a number: ");
        scanf("%d", &input_number);

        /* Check the number */
        if( (input_number < 0) )
        { printf("\n You entered a negative number.\n"); }     /* Print the result */
        else
        { printf("\n You entered a positive number.\n"); }     /* Print the result */

        /* Get the user choice */
        printf("\n If you want to continue press (c) \
                \n If you want to exit press (e)");
        printf("\n [>]: "); scanf(" %c", &condition);
        
    } while( (condition != 'e') );

    printf("\n");
    return 0;
}
//!=============================> .END
