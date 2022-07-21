/**
 * @file p0.c
 * @author Mohamed Wx (gtlyco205@gmail.com)
 * @brief 00-Expresions-Solution.
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
    int input_1, 
        input_2, 
        input_3, 
        input_4;

    int numerator, 
        denominator;
        
    float ratio;

    /* Get the user input */
    printf("\n Enter integer value one: ");     scanf("%d", &input_1);
    printf("\n Enter integer value two: ");     scanf("%d", &input_2);
    printf("\n Enter integer value three: ");   scanf("%d", &input_3);
    printf("\n Enter integer value four: ");    scanf("%d", &input_4);

    /* Calculate the ratio */
    numerator   = (input_1 + input_2);
    denominator = (input_3 - input_4);
    
    if(denominator == 0) // Check for the over flow.
    {
        printf("\n denominator is equal to zero."); // Notify the user.
        return -1; // Return -1. (EXIT_FAILURE indication)
    }

    ratio = ( (numerator) / (denominator) );
    
    /* Print the ratio result */
    printf("\n Ration = %.4f", ratio);
    
    printf("\n");
    return 0;
}


//!=============================> .END
