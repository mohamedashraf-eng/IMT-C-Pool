/**
 * @file p5.c
 * @author Mohamed Wx (gtlyco205@gmail.com)
 * @brief 05-Arrays-Solution.
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
    int array_size, array[256] = {0},
        element_insert, element_index;

    /* Get the user input */
    printf("\n Enter size of the array: ");
    scanf("%d", &array_size);

    printf("\n Enter %d elements in array: ", array_size);
    int i;
    for(i = 0; i < array_size; i++)
    {
        scanf("%d", &array[i]);
    }

    printf("\n Enter element to insert: ");
    scanf("%d", &element_insert);

    // Assuming user will enter position [0, n-1]
    printf("\n Enter the element position: ");
    scanf("%d", &element_index);

    /* Do the operation */
    /*
        Algorithm: 
        * By Shifting the array at given position to right.

        Assume array_size: 5

         0  1  2  3  4 : Position (Index)
         |  |  |  |  |
        [1][2][3][4][5]

        To insert new element 'x' at position '3'.

         0  1  2  3  4  5: Position (Index)
         |  |  |  |  |  |
        [1][2][3][x][4][5] ... We have to shift [position, n-1] to right.

        - Note: array size increased by 1.
    */

    array_size += 1; // Make new place the the new element.

    for(i = array_size; i >= element_index; i--)
    {
        // Shifting to right.
        array[i] = array[i-1];

        /*
            Tracking the process:

            Assume: (element_index: 4), (array_size: 5).
            i: 5
                    0   1   2   3   4   5 || 6   7   8   ... 
                    |   |   |   |   |   | || |   |   |
            array: [10][20][30][40][60][x]||[n1][n2][n3] ... (Already allocated but not used)
                                          ||
            - Loop starts.
            -00- array[5] = array[4] = 60.
            - Loop terminates.

                    0   1   2   3   4   5
                    |   |   |   |   |   |
            array: [10][20][30][40][x][60] 
            Inserted new element.
        */
    }

    // Insert the given element at the given position.
    array[element_index] = element_insert;

    /* Print the result */
    printf("\n Array elements after insertion: ");
    for(i = 0; i < array_size; i++)
    { printf("%d\t", array[i]); }

    printf("\n");
    return 0;
}
//!=============================> .END
