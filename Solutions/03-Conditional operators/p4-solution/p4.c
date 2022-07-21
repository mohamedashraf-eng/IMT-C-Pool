/**
 * @file p4.c
 * @author Mohamed Wx (gtlyco205@gmail.com)
 * @brief 04-Conditional Operators-Solution.
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
    printf("\n Enter any character: ");
    scanf("%c", &input_character);
    
    /* Do the operation */
    /*
        Using ASCII property: ('A': 65, 'Z': 'A'+25), ('a': 97, 'z': 'a'+25)
        1- If the input character is ( [65, 90] || [97, 122])  (Interval belong to Real Numbers)
    */
    ( ((input_character >= 'A') && (input_character <= 'Z')) || 
    (  (input_character >= 'a') && (input_character <= 'z'))) ? // If.
                                                                (printf("\n It is ALPHABET")) : // Else.
                                                                                                ((printf("\n It is NOT ALPHABET")));

    printf("\n");
    return 0;
}
//!=============================> .END
