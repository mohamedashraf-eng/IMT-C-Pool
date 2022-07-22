/**
 * @file p4.c
 * @author Mohamed Wx (gtlyco205@gmail.com)
 * @brief 04-Structs-Solution.
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
!-                      DEFINED STRUCTS                        -
----------------------------------------------------------------
*/

struct MinMax
{
    int min, 
        max;
};

/*
----------------------------------------------------------------
!-                      FUNCTION DECLARED                      -
----------------------------------------------------------------
*/
struct MinMax FindMinMax(int *, int);

//!=============================> .MAIN (Entry point)
int main(void)
{   
    /* Variables Declaration */
    int array[10], size = 10;
    
    struct MinMax myMinMax;

    /* Get the user input */
    printf("\n Enter %d elements in array: \n", size);

    int i;
    for(i = 0; i < size; i++)
    {
        scanf("%d", &array[i]);
    }

    /* Do the operation */
    myMinMax = FindMinMax(array, size);

    /* Printf the result */
    printf("\n Minimum value in array: %d", myMinMax.min);
    printf("\n Maximum value in array: %d", myMinMax.max);  

    printf("\n");
    return 0;
}

/*
----------------------------------------------------------------
!-                      FUNCTION IMPLEMENTATION                -
----------------------------------------------------------------
*/

/**
 * @brief Function to find the minimum and maximum values in array.
 * 
 * @param array 
 * @param size 
 * @return struct MinMax 
 */
struct MinMax FindMinMax(int *array, int size)
{
    int Min = array[0], 
        Max = array[0];

    struct MinMax myMinMax;

    int i;
    for(i = 0; i < size; i++)
    {
        if( (array[i] > Max) )
        { Max = array[i]; }
        else;

        if( (array[i] < Min) )
        { Min = array[i]; }
        else;
    }

    myMinMax.max = Max;
    myMinMax.min = Min;

    return myMinMax;
}//end FindMinMax.

//!=============================> .END