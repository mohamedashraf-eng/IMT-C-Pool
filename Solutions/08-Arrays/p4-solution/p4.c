/**
 * @file p4.c
 * @author Mohamed Wx (gtlyco205@gmail.com)
 * @brief 04-Arrays-Solution.
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

    int even_counter = 0, 
        odd_counter = 0;

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
    for(i = 0; i < array_size; i++)
    {   
        // Check if the element is even.
        if( (array[i]%2 == 0) )
        { even_counter++; }
        
        else
        { odd_counter++; }
    }

    /* Print the result */
    printf("\n Total even elements: %d", even_counter);
    printf("\n Total odd elements: %d", odd_counter);

    printf("\n");
    return 0;
}
//!=============================> .END
