/**
 * @file p10.c
 * @author Mohamed Wx (gtlyco205@gmail.com)
 * @brief 10-Arrays-Solution.
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
    int array_size, array[256];

    /* Get user input */
    printf("\n Enter size of array: ");
    scanf("%d", &array_size);

    printf("\n Enter elements into array: ");

    int i;
    for(i = 0; i < array_size; i++)
    {
        scanf("%d", &array[i]);
    }


    /* Do the operation */
    /*
        Algorithm: 
        1- Sort the array.
        2- Iterate and compare.
    */

    // Sort the array using bubble sort. O(N^2). --BAD--
    int j;

    for(i = 0; i < array_size; i++)
    {
        for(j = 0; j < array_size-i-1; j++)
        {
            // Ascending order.
            if( (array[j] >= array[j+1]) )
            {
                // Swap.
                int temp   = array[j];
                array[j]   = array[j+1];
                array[j+1] = temp;
            }
        }
    }

    printf("\n Missing numbers: ");
    j = 0;  
    i = 0;
    
    int first = array[0], 
        last  = array[array_size-1];

    // Iterate & compare.
    for(i = first; i <= last; i++)
    {
        if( (array[j] == i) )
        { j++; }
        
        else
        {
            /* Print the result */
            printf("\n %d", i);
        }
    }   

    printf("\n");
    return 0;
}
//!=============================> .END
