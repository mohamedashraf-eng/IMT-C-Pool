/**
 * @file p8.c
 * @author Mohamed Wx (gtlyco205@gmail.com)
 * @brief 08-Arrays-Solution.
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
    int array_size = 15, array[256];

    int baby = 0, teen = 0, adult = 0;

    /* Get the user input */
    printf("\n Enter %d elements: ", array_size);

    /* Do the operation */
    int i = 0;
    while( (i < array_size) )
    {
        scanf("%d", &array[i]);

        if( (array[i] >= 0) && (array[i] <= 5) )
        { baby++; }
        else if( (array[i] >= 6) && (array[i] <= 17) )
        { teen++; }
        else if( (array[i] >= 18) )
        { adult++; }
        else;

        i++;
    }

    /* Print the result */
    printf("\n Numbers of still a baby: %d", baby);
    printf("\n Numbers of attending school: %d", teen);
    printf("\n Numbers of adult life: %d", adult);

    printf("\n");
    return 0;
}
//!=============================> .END
