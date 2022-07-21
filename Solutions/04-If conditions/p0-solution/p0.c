/**
 * @file p0.c
 * @author Mohamed Wx (gtlyco205@gmail.com)
 * @brief 00-If Condition-Solution.
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
    char input_character;

    /* Get the user input */
    printf("\n Enter an alphabet: ");
    scanf("%c", &input_character);
    
    /* Do the operation */
    /*
        Using ASCII: ['a', 'A'], ['e', 'E'], ['o', 'O'], ['l', 'L'], ['u', 'U']
    */
    // Checking for letter A.
    if( (input_character == 'a') || (input_character == 'A') )
    {printf("\n %c is a vowel.", input_character);} /* Print the result */
    // Checking for letter E.
    else if( (input_character == 'e') || (input_character == 'E') )
    {printf("\n %c is a vowel.", input_character);} /* Print the result */
    // Checking for letter O.
    else if( (input_character == 'o') || (input_character == 'O') )
    {printf("\n %c is a vowel.", input_character);} /* Print the result */
    // Checking for letter L.
    else if( (input_character == 'l') || (input_character == 'L') )
    {printf("\n %c is a vowel.", input_character);} /* Print the result */
    // Checking for letter U.
    else if( (input_character == 'u') || (input_character == 'U') )
    {printf("\n %c is a vowel.", input_character);} /* Print the result */
    // If nothing.
    else
    {printf("\n %c isn't a vowel.", input_character);} /* Print the result */

    printf("\n");
    return 0;
}
//!=============================> .END
