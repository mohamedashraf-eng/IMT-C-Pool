/**
 * @file p3.c
 * @author Mohamed Wx (gtlyco205@gmail.com)
 * @brief 03-Functions-Solution.
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
void EvenOdd(int number)
{

    (number%2 == 0) ? // If.
                        (printf("\n The number is even.")): // Else.
                                                            (printf("\n The number is odd."));

    return;
}

//!=============================> .MAIN (Entry point)
int main(void)
{   
    /* Variables Declaration */
    float input_number;

    /* Get the user input */
    printf("\n Enter any number: ");
    scanf("%f", &input_number);

   
    /* Print the reslt */
    EvenOdd(input_number);
    
    printf("\n");
    return 0;
}
//!=============================> .END
