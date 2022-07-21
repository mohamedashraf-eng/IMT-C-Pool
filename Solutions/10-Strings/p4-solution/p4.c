/**
 * @file p4.c
 * @author Mohamed Wx (gtlyco205@gmail.com)
 * @brief 04-Strings-Solution.
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
    char input_string1[256], input_string2[256];

    char concatenated_string[256], 
         string_size = 0;

    /* Get the user input */
    printf("\n Enter the first string: ");
    scanf("%s", input_string1);

    printf(" Enter the second string: ");
    scanf("%s", input_string2);

    /* Do the operation */

    int i;
    for(i = 0; input_string1[i] != '\0'; i++) /* Copy the first string */
    {
        concatenated_string[i] = input_string1[i];
    }

    int j;
    for(j = 0; input_string2[j] != '\0'; j++) /* Copy the second string */
    {
        concatenated_string[i+j] = input_string2[j];
        // i: The latest stopped value on string1
        // we increase by j.
    }

    /* Printf the result */
    string_size = i+j;

    printf("\n After concatenation: ");
    for(i = 0; i < string_size; i++) 
    {
        printf("%c", concatenated_string[i]);
    }

    printf("\n");
    return 0;
}
//!=============================> .END
