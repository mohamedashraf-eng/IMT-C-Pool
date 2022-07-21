/**
 * @file p0.c
 * @author Mohamed Wx (gtlyco205@gmail.com)
 * @brief 03-Arrays-Solution.
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
    int array_size, array[256] = {0};

    int first_max  = array[0],   // Initialize with random index. [0, n-1]
        second_max = array[0];  // Initialize with random index. [0, n-1]

    /* Get the user input */
    printf("\n Enter size of the array (1-1000): ");
    scanf("%d", &array_size);

    printf("\n Enter elements in array: ");
    int i;
    for(i = 0; i < array_size; i++)
    {
        scanf("%d", &array[i]);
    }

    /* Do the operation */
    /*
        Algorithm: O(N) Method 1
            1- Iterating through the array.
            2- Find the max. (FIRST MAX)
            3- Remove it. (For simplicity we can replace it with 0. So it becomes useless)
            4- Find the max again. (SECOND MAX)
        - For the method 1 if the data is important we can copy the data in temporary_buffer array.
        
        Algorithm: O(Nlogn) Method 2 (Complicated to implement right now)
            1- Sort the array with (Heap/Merge/Quick/Selection) Sort.
            2- Directly access the the last and last-1 index in the array.
    */

    // Search for the first max.
    int max_index = 0;
    for(i = 0; i < array_size; i++)
    {
        if( (array[i] > first_max) )
        { 
            first_max = array[i]; 
            max_index = i; // Track the max index.
        }
        else;
    }
    
    array[max_index] = 0; // Replace the previous max with 0. So

    // Serch for the second max.
    for(i = 0; i < array_size; i++)
    {
        if( (array[i] > second_max) )
        { second_max = array[i]; }
        else;
    }

    /* Print the result */
    printf("\n First largest = %d", first_max);
    printf("\n Second largest = %d", second_max);

    printf("\n");
    return 0;
}
//!=============================> .END
