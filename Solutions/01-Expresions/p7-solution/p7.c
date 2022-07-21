/**
 * @file p7.c
 * @author Mohamed Wx (gtlyco205@gmail.com)
 * @brief 07-Expresions-Solution.
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
    int base, 
        exponent;

    int result;

    /* Get the user input */
    printf("\n Enter base: ");     scanf("%d", &base);
    printf("\n Enter exponent: "); scanf("%d", &exponent);
    
    /* Calculate the power */
    result = pow(base, exponent);

    /* Print the result */
    printf("\n %d ^ %d = %d", base, exponent, result);

    printf("\n");
    return 0;
}


//!=============================> .END
