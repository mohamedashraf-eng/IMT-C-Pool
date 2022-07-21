/**
 * @file p4.c
 * @author Mohamed Wx (gtlyco205@gmail.com)
 * @brief 04-Functions-Solution.
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
!-                      DECLARED FUNCTIONS                     -
----------------------------------------------------------------
*/

/* Do the operation */
void PrimeArmstrongPerfect(int number)
{

    /* Check if the number is prime. */
    // Note => Prime number: If the number isn't divisible by anything excebt 1 & itself.
    int i = (number - 1); // Range [2, n-1].

    while( ((number%i) != 0) && (i >= 2) )
    {
        i--;
    }
    
    /* Print the result */
    if( (i > 2) )
    { printf("\n %d is not Prime number.", number); } /* Print the result */
    else
    { printf("\n %d is Prime number.", number); } /* Print the result */

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
    { printf("\n %d is Armstrong number.", number); } /* Print the result */
    else
    { printf("\n %d is not Armstrong number.", number); } /* Print the result */

    /* Check if the number is perfect */
    // Note => Perfect number: If the sum of its factors returned the main number.
    temporary = number;
    i = number-1;

    int sum = 0;
    while( (i >= 1) )
    {   
        if( (temporary%i == 0) )
        { sum += i; }
        else;
        
        i--;
    }

    if( (sum == number) )
    { printf("\n %d is Perfect number.", number); } /* Print the result */
    else
    { printf("\n %d is not Perfect number.", number); } /* Print the result */

    return;
}

//!=============================> .MAIN (Entry point)
int main(void)
{   
    /* Variables Declaration */
    int input_number;

    /* Get the user input */
    printf("\n Enter any number: ");
    scanf("%d", &input_number);

    /* Print the reslt */
    PrimeArmstrongPerfect(input_number);
    
    printf("\n");
    return 0;
}
//!=============================> .END
