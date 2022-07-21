/*
    Author: Mohamed Wx
    Date: 7/7/2022
    Subject: IMT - C pool problem 0. Solution
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
    int input_number, input_rotation;
    
    /* Get the user input */
    printf("\n Enter starting value: ");
    scanf("%d", &input_number);

    /* Do the operation */
    int i = input_number;
    while( (i >= 1) )
    {   
        /* Print the result */
        printf("\n %d", i);
        i--;
    }
    
    printf("\n");
    return 0;
}
//!=============================> .END
