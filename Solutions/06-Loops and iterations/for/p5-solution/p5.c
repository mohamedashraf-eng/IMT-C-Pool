/**
 * @file p5.c
 * @author Mohamed Wx (gtlyco205@gmail.com)
 * @brief 05-For-Solution.
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

    float equation = 0;

    /* Get the user input */
    printf("\n Enter the value  of n: ");
    scanf("%d", &input_number);

    /* Do the operation */
    int i;
    for(i = 1; i <= input_number; i++)
    {
        equation +=  ((float) 1 / i); // equation += (1.0f / i);

        /* Print the result */
        printf("\n %d %.4f", i, equation);
    }

   
    printf("\n");
    return 0;
}
//!=============================> .END
