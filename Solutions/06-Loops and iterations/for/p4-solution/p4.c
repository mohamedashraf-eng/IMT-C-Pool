/**
 * @file p4.c
 * @author Mohamed Wx (gtlyco205@gmail.com)
 * @brief 04-For-Solution.
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
    int input_number1, input_number2;

    float GCD = 0.0f, LCM = 0.0f;

    /* Get the user input */
    printf("\n Enter two positive integers: ");
    scanf("%d", &input_number1);
    scanf("%d", &input_number2);

    /* Do the operation */
    /*
        LCM: Least Common Multiple of two numbers.
        GCD: Greatest Common Divider of two numbers.
        
        LCM = (n1 * n2) / GCD.
    */

    int i;
    for(i = 1; (i <= input_number1) && (i <= input_number2); i++)
    {   
        // Loop till find the greatest common divider.
        if( (input_number1%i == 0) && (input_number2%i == 0))
        { GCD = i; }
    }

    LCM = ( (input_number1 * input_number2) / (GCD) );

    printf("\n The LCM of two numbers %d and %d is %.0f", input_number1, input_number2, LCM);

    printf("\n");
    return 0;
}
//!=============================> .END
