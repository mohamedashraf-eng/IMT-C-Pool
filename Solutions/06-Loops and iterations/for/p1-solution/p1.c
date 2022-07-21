/**
 * @file p1.c
 * @author Mohamed Wx (gtlyco205@gmail.com)
 * @brief 01-For-Solution.
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
    int sum = 0;

    /* Get the user input */
    

    /* Do the operation */
    int i;
    for(i = 1; i <= 10; i++)
    {
        /* Print the result */
        printf("%d ", i);

        sum = sum + i;
    }
    
    /* Print the result */
    printf("\n The sum is: %d", sum);
   
    printf("\n");
    return 0;
}
//!=============================> .END
