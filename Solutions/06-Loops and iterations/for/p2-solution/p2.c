/**
 * @file p2.c
 * @author Mohamed Wx (gtlyco205@gmail.com)
 * @brief 02-For-Solution.
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
    float avg = 0.0f;

    /* Do the operation */
    printf("\n Input the 10 numbers: \n");

    int i;
    for(i = 0; i < 10; i++)
    {
        /* Get the user input */
        printf("Number-%d: ", i);
        scanf("%d", &input_number);

        sum += input_number;
    }

    avg = (sum / 10.0);

    /* Print the result */
    printf("\n The sum of 10 no is: %d", sum);
    printf("\n The avreage is: %f", avg);
   
    printf("\n");
    return 0;
}
//!=============================> .END
