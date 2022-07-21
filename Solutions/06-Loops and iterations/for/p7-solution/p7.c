/**
 * @file p7.c
 * @author Mohamed Wx (gtlyco205@gmail.com)
 * @brief 07-For-Solution.
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
    printf("\n Enter the number: ");
    scanf("%d", &input_number);

    /* Do the operation */
    /*
        Basically factor of a given number: if the number is divisible by 'n'. So 'n' is a factor.
    */

    printf("\n Factors of %d are: ", input_number);
    int i;
    for(i = 1; i <= input_number; i++)
    {
        if( (input_number%i == 0) )
        {
            /* Print the result */
            printf("%d ", i);
        }
    }

   
    printf("\n");
    return 0;
}
//!=============================> .END
