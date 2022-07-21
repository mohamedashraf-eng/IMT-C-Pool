/**
 * @file p11.c
 * @author Mohamed Wx (gtlyco205@gmail.com)
 * @brief 11-Arrays-Solution.
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
    int array1_size, array2_size,
        array1[256], array2[256];

    int array3_size, array3[256], 
        median = 0;

    /* Get the user input */
    printf("\n Enter size of array_1: ");
    scanf("%d", &array1_size);

    printf("\n Enter elements of array_1: \n");
    int i;
    for(i = 0; i < array1_size; i++)
    {
        printf(" Enter element_%d: ", i+1);
        scanf("%d", &array1[i]);
    }

    printf("\n Enter size of array_2: ");
    scanf("%d", &array2_size);

    printf("\n Enter elements of array_2: \n");
    for(i = 0; i < array2_size; i++)
    {   
        printf(" Enter element_%d: ", i+1);
        scanf("%d", &array2[i]);
    }

    /* Do the operation */
    /*
        Algorithm: 
        - Using merge sort technique. (Left/Right) sub arrays.

        - To find the median 

        if array_size is even: median = (x+y)/2 median. (Direct middle index and the previous)
        if array_size is odd:  median = x/2.            (Direct middle index)
    */

    array3_size = ( array1_size + array2_size );

    int j = 0, 
        k = 0;
        i = 0;

    while( (i < array1_size) && (j < array2_size) )
    {
        // Make comparasion to add the lowest.
        if( (array1[i] < array2[j]) )
        {   
            // Add it to the third array.
            array3[k] = array1[i];

            // Increase the index.
            i++;
            k++;    
        }
        else
        {
            // Add it to the third array.
            array3[k] = array2[j];

            // Increase the index.
            j++;
            k++;    
        }
    }

    // Add the remaining elements wherever.
    while( (i < array1_size) )
    {
        array3[k] = array1[i];

        // Increase the index.
        i++;
        k++;    
    }

    while( (j < array2_size) )
    {
        array3[k] = array2[j];

        // Increase the index.
        j++;
        k++;    
    }

    /* Print the result */
    int mid_index = ( array3_size / 2 );

    // If size is even we got 2 medians.
    if( (array3_size%2 == 0) )
    {
        median = ( (array3[mid_index] + array3[mid_index-1]) / 2 );
    }
    else
    {
        median = ( (array3[mid_index]) / 2 );   
    }

    printf("\n Median is %d", median);

    printf("\n");
    return 0;
}
//!=============================> .END
