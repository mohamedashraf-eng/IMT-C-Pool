/**
 * @file p3.c
 * @author Mohamed Wx (gtlyco205@gmail.com)
 * @brief 03-Strings-Solution.
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
!-                      DEFINED G VARIABLES                    -
----------------------------------------------------------------
*/

//!=============================> .MAIN (Entry point)
int main(void)
{   
    /* Variables Declaration */
    char input_string[256];

    /* Get the user input */
    printf("\n Enter a string: ");
    gets(input_string); // Allows string with spaces.

    /* Do the operation */
    /*
        Algorithm: O(N) N: Length of string.
        - Iterating through the string till it ends. 
    */

    int i;
    for(i = 0; input_string[i] != '\0'; i++);

    /* Print the result */
    printf("\n Length of string: %d", i);

    printf("\n");
    return 0;
}
//!=============================> .END
