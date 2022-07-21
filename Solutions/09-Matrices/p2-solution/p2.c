/**
 * @file p2.c
 * @author Mohamed Wx (gtlyco205@gmail.com)
 * @brief 02-Matrices-Solution.
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
    int matrix1[256][256], 
        row1, col1;

    int matrix2[256][256],
        row2, col2;

    /* Get the user input */
    printf("\n Enter rows and columns of matrix: ");
    scanf("%d", &row1);
    scanf("%d", &col1);

    printf("\n Enter elements of matrix:\n");
    
    int i, j;
    for(i = 0; i < row1; i++)
    {
        for(j = 0; j < col1; j++)
        {   
            printf(" Enter element a%d%d: ", i+1, j+1);
            scanf("%d", &matrix1[i][j]);
        }
    }

    /* Do the operation */
    
    // Set the transpose matrix parameters.
    row2 = col1;
    col2 = row1;

    for(i = 0; i < row2; i++)
    {
        for(j = 0; j < col2; j++)
        {   
            matrix2[i][j] = matrix1[j][i];
        }
    }

    /* Print the result */
    printf("\n Entered matrix: \n");

    for(i = 0; i < row1; i++)
    {
        for(j = 0; j < col1; j++)
        {
            printf(" %-3d", matrix1[i][j]);
        }
        printf("\n");
    }

    printf("\n Transpose of Matrix:\n");

    for(i = 0; i < row2; i++)
    {
        for(j = 0; j < col2; j++)
        {
            printf(" %-3d", matrix2[i][j]);
        }
        printf("\n");
    }
 

    printf("\n");
    return 0;
}
//!=============================> .END
