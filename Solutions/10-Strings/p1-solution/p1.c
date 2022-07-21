/**
 * @file p1.c
 * @author Mohamed Wx (gtlyco205@gmail.com)
 * @brief 01-Strings-Solution.
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

    char vowel_counter = 0, 
         digit_counter = 0,
         consonant_counter = 0, 
         whitespace_counter = 0;

    /* Get the user input */
    printf("\n Enter a string: ");
    gets(input_string); // Allows string with spaces.

    /* Do the operation */
    /*
        Algorithm: O(N) N: Length of string.
        - Iterating through the string.
        - Detect if the current character is compatiable with needed.
    */

    int i;
    for(i = 0; input_string[i] != '\0'; i++) // We can replace condition: ( i < strlen(input_string) )
    {

        // Check for vowels.
        if( (input_string[i] == 'a') || (input_string[i] == 'e') || (input_string[i] == 'i') ||
            (input_string[i] == 'o') || (input_string[i] == 'u') || (input_string[i] == 'A') ||
            (input_string[i] == 'E') || (input_string[i] == 'I') || (input_string[i] == 'O') ||
            (input_string[i] == 'U'))
        { vowel_counter++; }

        // Check for consonants.
        else if( ((input_string[i] >= 'A') && (input_string[i] <= 'Z')) || 
                 ((input_string[i] >= 'a') && (input_string[i] <= 'z')) )
        { consonant_counter++; }

        // Check for digits.
        else if( (input_string[i] >= '0') && (input_string[i] <= '9') )
        { digit_counter++; }

        // Check for white spaces.
        else if( (input_string[i] == ' ') )
        { whitespace_counter++; }

        else;
    }// end outer for.

    /* Print the result */
    printf("\n Vowels: %d     \
            \n Consonants: %d  \
            \n Digits: %d       \
            \n White spaces: %d", vowel_counter, 
                                  consonant_counter, 
                                  digit_counter, 
                                  whitespace_counter);

    printf("\n");
    return 0;
}
//!=============================> .END
