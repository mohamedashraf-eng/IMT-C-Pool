/**
 * @file p0.c
 * @author Mohamed Wx (gtlyco205@gmail.com)
 * @brief 00-Strings-Solution.
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

    char input_character, 
         character_frequency_counter = 0;

    /* Get the user input */
    printf("\n Enter a string: ");
    scanf("%s", &input_string);

    printf("\n Enter character to find the frequency: ");
    scanf(" %c", &input_character);

    /* Do the operation */
    /*
        Algorithm: O(N) N: Length of string.
        - Iterating through the string.
        - If charachter found increase the counter.
    */

    int i;
    for(i = 0; input_string[i] != '\0'; i++)
    {
        if( (input_string[i] == input_character) )
        { character_frequency_counter++; }
        else;
    }

    /* Print the result */
    printf("\n Frequency of %c = %d", input_character, character_frequency_counter);

    printf("\n");
    return 0;
}
//!=============================> .END
