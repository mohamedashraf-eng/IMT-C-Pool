/**
 * @file p15.c
 * @author Mohamed Wx (gtlyco205@gmail.com)
 * @brief 15-Arrays-Solution.
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

    int number_of_rotation;

    /* Get the user input */
    printf("\n Enter %d elements array: ", array_size);

    int i;
    for(i = 0; i < array_size; i++)
    {
        scanf("%d", &array[i]);
    }

    printf("\n Enter number of times to right rotate: ");
    scanf("%d", &number_of_rotation);

    printf("\n Array before rotation: ");
    
    for(i = 0; i < array_size; i++)
    {
        printf("%d ", array[i]);
    }

    /* Do the operation */
    /*
        Algorithm: Method 1. O(N^2) -BAD-
        - Shifting right the elements of array n times.

        Algorithm: Method 2. O(N) -ACCEPTABLE-
        - Reverse the array using reversal technique.
    */
    
    // Shifting method.
    int j = 0,
        temp = 0;
    
    for(i = 0; i < number_of_rotation; i++)
    {
        // Store the first element.
        temp = array[array_size-1];

        for(j = array_size; j >= 0; j--)
        {
            // Shift left.
            array[j] = array[j-1];
        }

        // Replace it with the last element.
        array[0] = temp; 
    }

    /* Print the result */
    printf("\n Array after rotation: ");

    for(i = 0; i < array_size; i++)
    {
        printf("%d ", array[i]);
    }

    printf("\n");
    return 0;
}
//!=============================> .END
