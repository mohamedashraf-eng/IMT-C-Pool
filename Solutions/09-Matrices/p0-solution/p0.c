/**
 * @file p0.c
 * @author Mohamed Wx (gtlyco205@gmail.com)
 * @brief 00-Matrices-Solution.
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
    int matrix1[256][256], matrix2[256][256],
        row, col;

    int array_size = 0, sum[256];

    /* Get the user input */
    printf("\n Enter number of rows (between 0 and 100): ");
    scanf("%d", &row);

    printf("\n Enter number of columns (between 0 and 100): ");
    scanf("%d", &col);

    printf("\n Enter elements of 1st matrix:\n");
    
    int i, j;
    for(i = 0; i < row; i++)
    {
        for(j = 0; j < col; j++)
        {   
            printf(" Enter element a%d%d: ", i+1, j+1);
            scanf("%d", &matrix1[i][j]);
        }
    }

    printf("\n Enter elements of 2nd matrix:\n");
    
    for(i = 0; i < row; i++)
    {
        for(j = 0; j < col; j++)
        {   
            printf(" Enter element a%d%d: ", i+1, j+1);
            scanf("%d", &matrix2[i][j]);
        }
    }

    /* Do the operation */

    array_size = ( row * col );
    
    int counter = 0;
    for(i = 0; i < row; i++)
    {
        for(j = 0; j < col; j++)
        {   
            sum[counter] = matrix1[i][j] + matrix2[i][j];
            counter++;
        }
    }

    /* Print the result */
    printf("\n Sum of two matrix is:\n");
    
    for(i = 0; i < array_size; i++)
    {
        printf("%d\t", sum[i]);

        // Splitting into 2 columns.
        if( ((i+1)%col  == 0) )
            printf("\n");
    }

    printf("\n");
    return 0;
}
//!=============================> .END
