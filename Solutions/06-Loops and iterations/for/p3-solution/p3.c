/**
 * @file p3.c
 * @author Mohamed Wx (gtlyco205@gmail.com)
 * @brief 03-For-Solution.
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
    printf("\n Input the number (Table to be calculated): ");
    scanf("%d", &input_number);

    /* Do the operation */
    int i;
    for(i = 1; i <= 10; i++)
    {
        /* Print the result */
        printf("\n %d X %d = %d", input_number, i, (input_number * i));
    }

   
    printf("\n");
    return 0;
}
//!=============================> .END
