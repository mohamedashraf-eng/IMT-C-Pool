/**
 * @file p1.c
 * @author Mohamed Wx (gtlyco205@gmail.com)
 * @brief 01-Do While-Solution.
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

    /* Do the operation */
    
    printf("\n MULTIPLICATION TABLE: \n");
    printf("--------------------------------------------------------\n");

    int i = 1, 
        j = 1;
    do
    {   
        do
        {
            int multiplication = i * j;
            printf("%-3d ", multiplication);

            i++;
        } while( (i <= 10) );

        printf("\n");

        i = 1; // Reseting the variable.
        j++;

    } while( (j <= 12) );

    printf("\n");
    return 0;
}
//!=============================> .END
