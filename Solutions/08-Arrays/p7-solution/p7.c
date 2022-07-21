/**
 * @file p7.c
 * @author Mohamed Wx (gtlyco205@gmail.com)
 * @brief 07-Arrays-Solution.
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

    int delete_index;

    /* Get the user input */
    printf("\n Enter number of elements in array: ");
    scanf("%d", &array_size);

    printf("\n Enter %d elements: ", array_size);
    int i;
    for(i = 0; i < array_size; i++)
    {
        scanf("%d", &array[i]);
    }

    printf("\n Enter the location where you wish to delete element: ");
    scanf("%d", &delete_index);

    /* Do the operation */
    /*
        Algorithm:  
        - By shifting elements to left.

        Assume array_size: 5

         0  1  2  3  4 : Position (Index)
         |  |  |  |  |
        [1][2][3][4][5]

        To delete element 'x' at position '2'.

         0  1  2  3 : Position (Index)
         |  |  |  |  
        [1][2][4][5] ... We have to shift [position, n-1] to left.

        - Note: array size decreased by 1.
    */

    // Error handler.
    if( (delete_index > (array_size-1)) && (delete_index < 0) )
    { printf("\n Invalid index."); }

    else
    {
        delete_index -= 1; // To make it compatiable with the array. (Starting with 0)

        for(i = delete_index; i < array_size; i++)
        {
            array[i] = array[i+1];
        }

        /*
            Tracking the process:

            Assume: (element_index: 2), (array_size: 5).
            i: 1
                    0  1  2  3   4   
                    |  |  |  |   |   
            array: [4][6][8][10][7]
                                        
            - Loop starts.
            -00- array[1] = array[2] = 8.
            -01- array[2] = array[3] = 10.
            -02- array[3] = array[4] = 7.
            - Loop terminates.

                    0  1  2   3  
                    |  |  |   |   
            array: [4][8][10][7]
            Deleted element.
        */
    }
    
    // Decrease size by 1.
    array_size -= 1; 

    /* Print the result */
    printf("\n Resultant array: ");
    for(i = 0; i < array_size; i++)
    { printf("\n%d", array[i]); }

    printf("\n");
    return 0;
}
//!=============================> .END
