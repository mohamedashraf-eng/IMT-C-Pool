/**
 * @file p10.c
 * @author Mohamed Wx (gtlyco205@gmail.com)
 * @brief 10-For-Solution.
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
    int input_number_row, input_number_col;

    int counter = 0;

    /* Get the user input */
    printf("\n Enter number of rows: ");
    scanf("%d", &input_number_row);

    printf("\n Enter number of columns: ");
    scanf("%d", &input_number_col);

    /* Do the operation */
    /* Method1: O(n^2) */

    int i, j;
    for(i = 1; i <= input_number_row; i++)
    {
        for(j = 1; j <= input_number_col; j++)
        {
            counter++;

            /* Print the result */
            printf("%-3d", counter);
        }

        printf("\n"); // Print new line for the new row.  
    }

    /* Method2: O(n) */
/*

    int flatten = (input_number_row * input_number_col);
    for(i = 1; i <= flatten; i++)
    {
        // Print the result 
        printf("%-3d", i);

        if( (i%input_number_row == 0) )
            printf("\n");
    }
*/

    printf("\n");
    return 0;
}
//!=============================> .END
