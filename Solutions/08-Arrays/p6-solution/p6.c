/**
 * @file p6.c
 * @author Mohamed Wx (gtlyco205@gmail.com)
 * @brief 06-Arrays-Solution.
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

    int array3_size, array3[256];

    /* Get the user input */
    printf("\n Input number of element in first array: ");
    scanf("%d", &array1_size);

    printf("\n Input %d integers: ", array1_size);
    int i;
    for(i = 0; i < array1_size; i++)
    {
        scanf("%d", &array1[i]);
    }

    printf("\n Input number of element in second array: ");
    scanf("%d", &array2_size);

    printf("\n Input %d integers: ", array2_size);
    for(i = 0; i < array2_size; i++)
    {
        scanf("%d", &array2[i]);
    }

    /* Do the operation */
    /*
        Algorithm: 
        * Using merge sort technique. (Left/Right) sub arrays.
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
    printf("\n Sorted array: ");
    for(i = 0; i < array3_size; i++)
    { printf("\n%d", array3[i]); }

    printf("\n");
    return 0;
}
//!=============================> .END
