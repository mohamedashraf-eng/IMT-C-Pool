/**
 * @file p10.c
 * @author Mohamed Wx (gtlyco205@gmail.com)
 * @brief 10-Functions-Solution.
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
void NCR_NPR(int n, int r)
{
    int NCR = 0, 
        NPR = 0;

    int n_factorial  = 1, 
        r_factorial  = 1, 
        nr_factorial = 1;

    /* General Calculations */
    int i = n;

    // Calculating the n factorial.
    while( (i >= 1) )
    {
        n_factorial *= i;

        i--;
    }

    // Calculating the r factorial.
    i = r;
    while( (i >= 1) )
    {
        r_factorial *= i;

        i--;
    }

    // Calculating the (n-r) factorial.
    i = (n-r);
    while( (i >= 1) )
    {
        nr_factorial *= i;

        i--;
    }

    /* Calculating the NCR */
    NCR = ( (n_factorial) / ((nr_factorial) * (r_factorial)) );

    /* Calculating the NPR */
    NPR = ( (n_factorial) / ((nr_factorial)) );

    /* Print the result */
    printf("\n %dC%d = %d \
            \n %dP%d = %d", n, r, NCR, n, r, NPR);

    return;
}

//!=============================> .MAIN (Entry point)
int main(void)
{   
    /* Variables Declaration */
    int input_number_n, input_number_r;

    /* Get the user input */
    printf("\n Enter the value of n and r: ");
    scanf("%d", &input_number_n);
    scanf("%d", &input_number_r);

    /* Prin the result */
    NCR_NPR(input_number_n, input_number_r);


    printf("\n");
    return 0;
}
//!=============================> .END
