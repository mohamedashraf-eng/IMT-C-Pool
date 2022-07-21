/**
 * @file p9.c
 * @author Mohamed Wx (gtlyco205@gmail.com)
 * @brief 09-Arrays-Solution.
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
    int array_size = 10, array[256];

    int baby = 0, teen = 0, adult = 0;

    /* Get the user input */
    printf("\n Enter the element of an array: ");

    int i = 0;
    for(i = 0; i < array_size; i++)
    {
        scanf("%d", &array[i]);
    }

    /* Do the operation */
    /*
        Alternate elemtns: ODD/EVEN Indices or array == [1, 3, 5, ...]/[2, 4, 6, ...]
    */

    /* Print the result */
    printf("\n Alternate elements of a given array: ");
    for(i = 0; i < array_size; i++)
    {
        // Printing the even alternate.
        if( (i%2 == 0) )
        { printf("\n %d", array[i]); }
        else;
        
        /*
        // Printing the odd alternate.
        if( (i%2 != 0) )
        { printf("\n %d", array[i]); }
        else;
        */ 
    }

    printf("\n");
    return 0;
}
//!=============================> .END
