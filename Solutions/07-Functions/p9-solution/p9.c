/**
 * @file p9.c
 * @author Mohamed Wx (gtlyco205@gmail.com)
 * @brief 09-Functions-Solution.
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
void PrimeNumbers(int lower, int upper)
{
    /* Print the result */
    printf("\n All prime number between %d to %d are: 1, 2, ", lower, upper);

    int i, j, PrimeFlag = 0;

    for(i = lower; i <= upper; i++)
    {
        for(j = i-1; j > 1; j--)
        {
            if( (i%j == 0) )
            { PrimeFlag = 0; break; }
            else
            { PrimeFlag = 1; }
        }

        if( (PrimeFlag == 1) )
        { printf("%d, ", i); PrimeFlag = 0; }
        else;
    }

    return;
}

//!=============================> .MAIN (Entry point)
int main(void)
{   
    /* Variables Declaration */
    int input_lower, input_upper;

    /* Get the user input */
    printf("\n Enter lower and upper limit to list primes: ");
    scanf("%d", &input_lower);
    scanf("%d", &input_upper);

    /* Print the result */
    PrimeNumbers(input_lower, input_upper);

    printf("\n");
    return 0;
}
//!=============================> .END
