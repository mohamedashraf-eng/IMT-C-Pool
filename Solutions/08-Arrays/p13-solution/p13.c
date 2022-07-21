/**
 * @file p13.c
 * @author Mohamed Wx (gtlyco205@gmail.com)
 * @brief 13-Arrays-Solution.
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

    int array_even_size = 0, array_even[256],
        array_odd_size = 0, array_odd[256];

    /* Get the user input */    
    printf("\n Enter size of the array: ");
    scanf("%d", &array_size);

    printf("\n Enter elements in the array: ");

    int i;
    for(i = 0; i < array_size; i++)
    {
        scanf("%d", &array[i]);
    }

    /* Do the operation */
    /*
        Algorithm:
        - Compare.
    */
    
    for(i = 0; i < array_size; i++)
    {   
        // If even.
        if( (array[i]%2 == 0) )
        {
            array_even[array_even_size] = array[i];
            array_even_size++;
        }
        else
        {
            array_odd[array_odd_size] = array[i];
            array_odd_size++;
        }
    }

    /* Print the result */
    printf("\n Elements of even array: ");

    for(i = 0; i < array_even_size; i++)
    { printf("%d ", array_even[i]); }

    printf("\n Elements of odd array: ");

    for(i = 0; i < array_odd_size; i++)
    { printf("%d ", array_odd[i]); }

    printf("\n");
    return 0;
}
//!=============================> .END
