/**
 * @file p6.c
 * @author Mohamed Wx (gtlyco205@gmail.com)
 * @brief 06-Strings-Solution.
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

    char copied_string[256], 
         string_size = 0;

    /* Get the user input */
    printf("\n Enter a string: ");
    scanf("%s", input_string);

    /* Do the operation */
    int i;
    for(i = 0; input_string[i] != '\0'; i++)
    {
        copied_string[string_size++] = input_string[i];
    }

    /* Printf the result */
    printf("\n String s2: ");
    for(i = 0; i < string_size; i++)
    {
        printf("%c", copied_string[i]);
    }

    printf("\n");
    return 0;
}
//!=============================> .END