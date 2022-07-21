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
    int input_number;

    /* Get the user input */
    printf("\n Print all even numbers till: ");
    scanf("%d", &input_number);

    /* Do the operation */
    printf("\n Even numbers from 1 to %d are: ", input_number);

    int i = 1;
    while( (i <= input_number) ) 
    {   
        /* Print the result */
        if((i%2 == 0))
            printf("\n %d", i);

        i++;
    }
    
    printf("\n");
    return 0;
}
//!=============================> .END
