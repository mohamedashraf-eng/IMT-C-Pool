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
    
    /* Get the user input */

    /* Do the operation */
    printf("\n Alphabets from a - z are: ");

    int i = 'a'; // i = 65; 
    while( (i <= 'z') ) // i <= (90)
    {   
        /* Print the result */
        printf("\n %c", i);
        i++;
    }
    
    printf("\n");
    return 0;
}
//!=============================> .END
