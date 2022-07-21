/**
 * @file p7.c
 * @author Mohamed Wx (gtlyco205@gmail.com)
 * @brief 07-Functions-Solution.
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
int NthRoot(int number, int root)
{
    // Using math equation.
    return ( pow(root, ((1.0/root) * log2(number))) );
}

//!=============================> .MAIN (Entry point)
int main(void)
{   
    /* Variables Declaration */
    int input_number, input_root;

    int result = 0;

    /* Get the user input */
    printf("\n Enter the number you wnat to find root: ");
    scanf("%d", &input_number);

    printf("\n Enter number of root: ");
    scanf("%d", &input_root);

    /* Print the reslt */
    result = NthRoot(input_number, input_root);
    
    printf("\n The root %d of %d = %d", input_root, input_number, result);

    printf("\n");
    return 0;
}
//!=============================> .END
