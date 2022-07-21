/**
 * @file p13.c
 * @author Mohamed Wx (gtlyco205@gmail.com)
 * @brief 13-If Condition-Solution.
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

    float result = 1.0f, factorial = 1.0f;

    /* Get the user input */
    printf("\n Enter value of x: ");
    scanf("%d", &input_number);


    /* Do the operation */
    /*
        Power series (exponential) e(x): 1 + x/1! + x2/2! ...
    */

    for(int i = 1; i < 25; i++)
    {
        factorial = ( factorial *  i ); // 1 * 2 * 3* 4 * 5 ..

        result    = ( result + (pow(input_number, i)) / (factorial) );
    }

    printf("\n Sum = %f", result);

    printf("\n"); 
    return 0;
}
//!=============================> .END
