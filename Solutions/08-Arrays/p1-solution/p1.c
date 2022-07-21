/**
 * @file p1.c
 * @author Mohamed Wx (gtlyco205@gmail.com)
 * @brief 01-Arrays-Solution.
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
    printf("\n Elements in array are: ");
    for(i = 0; i < array_size; i++)
    {
        /* Print the result */
        printf("%d, ", array[i]);   
    }    
    
    printf("\n");
    return 0;
}
//!=============================> .END
