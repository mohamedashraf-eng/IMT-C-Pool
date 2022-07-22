/**
 * @file p1.c
 * @author Mohamed Wx (gtlyco205@gmail.com)
 * @brief 01-Structs-Solution.
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
!-                      DEFINED STRUCTS                        -
----------------------------------------------------------------
*/

struct ComplexEquation
{
    float Real, Imaginary;
};

//!=============================> .MAIN (Entry point)
int main(void)
{   
    /* Variables Declaration */
    struct ComplexEquation CEq1, 
                           CEq2,
                           Sum;

    /* Get the user input */
    printf("\n For 1st complex number");
    printf("\n Enter real and imaginary part respectively: ");
    scanf("%f", &CEq1.Real);
    scanf("%f", &CEq1.Imaginary);

    printf("\n For 2nd complex number");
    printf("\n Enter real and imaginary part respectively: ");
    scanf("%f", &CEq2.Real);
    scanf("%f", &CEq2.Imaginary);

    /* Do the operation */
    Sum.Real = (CEq1.Real + CEq2.Real);
    Sum.Imaginary = (CEq1.Imaginary + CEq2.Imaginary);

    /* Printf the result */
    printf("\n Sum = %.1f + %.1fi", Sum.Real, Sum.Imaginary);

    printf("\n");
    return 0;
}
//!=============================> .END