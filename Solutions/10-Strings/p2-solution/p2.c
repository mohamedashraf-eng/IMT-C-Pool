/**
 * @file p2.c
 * @author Mohamed Wx (gtlyco205@gmail.com)
 * @brief 02-Strings-Solution.
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

    char output_string[256];

    /* Get the user input */
    printf("\n Enter a string: ");
    gets(input_string); // Allows string with spaces.

    /* Do the operation */
    /*
        Algorithm: O(N) N: Length of string.
        - Iterating through the string.
        - Check if the current character is alphabet or not.
    */

    int i;
    for(i = 0; input_string[i] != '\0'; i++) // We can replace condition: ( i < strlen(input_string) )
    {
        // Check i.
        

    }// end outer for.

    /* Print the result */
    printf("\n Output string: %s", output_string);

    printf("\n");
    return 0;
}
//!=============================> .END
