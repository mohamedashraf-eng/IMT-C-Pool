/**
 * @file p8.c
 * @author Mohamed Wx (gtlyco205@gmail.com)
 * @brief 08-Functions-Solution.
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
!-                      DECLARED FUNCTIONS                     -
----------------------------------------------------------------
*/

/* Do the operation */
int ArmstrongNumber(int number)
{
    /* Check if the number is armstrong */
    // Note => Argmstrong number: If we divide the number into digits and sum the qube of it and returned the main number.
    int temporary = number, divide = 0, QubedSum = 0;

    for( ; (temporary != 0) ; )
    {
        divide    = ( temporary % 10 );
        temporary = ( temporary / 10 );

        QubedSum  += ( divide * divide * divide );
    }

    if( (QubedSum == number) ) 
    { return 0; }
    else
    { return -1; } 
}

//!=============================> .MAIN (Entry point)
int main(void)
{   
    /* Variables Declaration */
    int input_number, input_root;

    int result = 0;

    /* Get the user input */
    printf("\n Input a number: ");
    scanf("%d", &input_number);

    /* Print the reslt */
    result = ArmstrongNumber(input_number);

    if( (result == 0) ) 
    { printf("\n %d is armstrong number.", input_number); } /* Print the result */
    else
    { printf("\n %d is not amstrong number.", input_number); } /* Print the result */

    printf("\n");
    return 0;
}
//!=============================> .END
