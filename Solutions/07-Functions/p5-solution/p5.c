/**
 * @file p5.c
 * @author Mohamed Wx (gtlyco205@gmail.com)
 * @brief 05-Functions-Solution.
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
int SquareRoot(int number)
{
    int SQRT = 0;

    // Check for the complex root.
    if( (number < 0) )
    {
        printf("\n Complex root.");
        SQRT = -1;
    }
    else
    {    
        // Using math equation.
        SQRT = ( pow(2, (0.5 * log2(number))) );
    }

    return SQRT;
}

//!=============================> .MAIN (Entry point)
int main(void)
{   
    /* Variables Declaration */
    int input_number;

    int result = 0;

    /* Get the user input */
    printf("\n Enter the number: ");
    scanf("%d", &input_number);

    /* Print the reslt */
    result = SquareRoot(input_number);
    
    printf("\n Result = %d", result);

    printf("\n");
    return 0;
}
//!=============================> .END
