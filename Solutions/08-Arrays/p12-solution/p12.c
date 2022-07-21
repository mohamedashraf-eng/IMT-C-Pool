/**
 * @file p12.c
 * @author Mohamed Wx (gtlyco205@gmail.com)
 * @brief 12-Arrays-Solution.
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
    int array1_size = 20, 
        array1[256] = {1, 3, 5, 7, 9, 11, 13, 15, 17, 19},
        array2_size = 10, 
        array2[256] = {2, 4, 6, 8, 10, 12, 14, 16, 18, 20};

    /* Get the user input */    
    /*
        Algoritm: O(X) - Depends on the sorting algorithm used.
        1- We can add the 10 elements of array2 directly to array1.
        2- Sort the array and it will be well placed by default. 

        Algorithm: O(N)
        - Using Even/Odd Sorting Algorithm.
    */

    // Using Even/Odd Sort.
    int i,
        k = 0,
        counter = 0;
    for(i = 2; i < array1_size; i++)
    {
        // If we are at even position.
        if( (i%2 == 0) )
        {
            // Free a room to the new element. (By Shifting The Array Right)
            int j;
            for(j = array1_size; j >= i; j--)
            {
                array1[j] = array1[j-1];
            }

            // Place the element.
            array1[i-1] = array2[k];

            k++;
        }
        else;
    }

    // Insert the last element.
    array1[array1_size-1] = array2[array2_size-1]; 

    /* Print the result */
    for(i = 0; i < array1_size; i++)
    {
        printf("%d ", array1[i]);
    }

    printf("\n");
    return 0;
}
//!=============================> .END
