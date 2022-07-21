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
#include <string.h>

/*
----------------------------------------------------------------
!-                      DEFINED G VARIABLES                    -
----------------------------------------------------------------
*/

//!=============================> .MAIN (Entry point)
int main(void)
{   
    /* Variables Declaration */
    char input_string[256], 
         string_size = 0;

    char new_string[256],
         new_string_size = 0;

    /* Get the user input */
    printf("\n Enter the first string: ");
    gets(input_string);

    /* Do the operation */
    string_size = strlen(input_string);

    int i = 0, 
        j = 0;

    while( (i < string_size) ) 
    {
        if( (input_string[i] == ' ') )
        {
            if( !(input_string[i+1] != ' ') )
            {
                new_string[j] = ' ';
                j++;
            }
            else;
        }
        else
        {
            new_string[j] = input_string[i];

            i++;
            j++;
        }
    }

    /* Printf the result */
    printf("\n Text after removing blanks: ");

    for(i = 0; i < j; i++)
    {
        printf("%c", input_string[i]);
    }

    printf("\n");
    return 0;
}
//!=============================> .END