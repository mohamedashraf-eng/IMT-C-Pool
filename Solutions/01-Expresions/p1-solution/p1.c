/**
 * @file p1.c
 * @author Mohamed Wx (gtlyco205@gmail.com)
 * @brief 01-Expresions-Solution.
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
    char user_input;

    /* Get the user input */
    printf("\n Enter a character: ");
    scanf("%c", &user_input);

    /* Print the numerical result */
    printf("\n ASCII value of %c = %d", user_input, user_input);

    printf("\n");
    return 0;
}


//!=============================> .END
