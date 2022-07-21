/**
 * @file p9.c
 * @author Mohamed Wx (gtlyco205@gmail.com)
 * @brief 09-For-Solution.
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

    int sum = 0;

    /* Get the user input */
    printf("\n Enter any number: ");
    scanf("%d", &input_number);

    /* Do the operation */
    int i;
    for(i = 1; i <= input_number; i++)
    {
        /* To print the same as output */
        if( (i == input_number) )
            printf("%d", input_number);
        else
            printf("%d+1/", i);

        sum += i;
    }

    /* Print the result */
    printf("\n sum = 1/%d", sum);

    printf("\n");
    return 0;
}
//!=============================> .END
