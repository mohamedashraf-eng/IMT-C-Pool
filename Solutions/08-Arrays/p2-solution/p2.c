/**
 * @file p2.c
 * @author Mohamed Wx (gtlyco205@gmail.com)
 * @brief 02-Arrays-Solution.
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

    int sum = 0;
    
    /* Get the user input */
    printf("\n Enter size of the array: ");
    scanf("%d", &array_size);

    printf("\n Enter %d elements in array: ", array_size);

    int i;
    for(i = 0; i < array_size; i++)
    {
        scanf("%d", &array[i]);
    }


    /* Do the operation */

    /* Print the result */
    for(i = 0; i < array_size; i++)
    {
        sum += array[i];
    }     

    printf("\n Sum of all elements of array = %d", sum);
    
    printf("\n");
    return 0;
}
//!=============================> .END
