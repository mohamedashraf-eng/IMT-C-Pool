/**
 * @file p3.c
 * @author Mohamed Wx (gtlyco205@gmail.com)
 * @brief 03-Matrices-Solution.
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
!-                      DEFINED FUNCTIONS                      -
----------------------------------------------------------------
*/

/* Do the operation */
// C Standards: Passed 2D array must have constant known columns.
void MatrixMultiplication(int matrix1[][256], int row1, int col1,
                          int matrix2[][256], int row2, int col2)
{
    int matrix3[256][256],
        row3, col3, 
        temp_sum = 0;

    /* Do the operation */
    /*
        - Dot product of two matrices.
        Important condition: Column of first matrix must equal Row of second matrix.
        
          A            B            C
        (2x3)        (3x2)        (2x2)
        [00][01][02] [00][01]  => [(00*00 + 01*10 + 02*20) (00*00 + 01*10 + 02*20)]
        [10][11][12] [10][11]  => [(00*01 + 01*11 + 02*21) (10*01 + 11*11 + 12*21)]
                     [20][21]  
    */
    
    // Setting the result matrix parameters.
    row3 = row1;
    col3 = col2;

    int i = 0,
        j = 0,
        k = 0;

    for(i = 0; i < row3; i++)
    {
        for(j = 0; j < col3; j++)
        {   
            for(k = 0; k < row2; k++)
            {
                // Perform the dot product.
                temp_sum += ( matrix1[i][k] * matrix2[k][j] ); 
            } 

            matrix3[i][j] = temp_sum;   // Save the value.
            temp_sum = 0;              // Reset the variable.
        }
    }

    /* Print the result */
    printf("\n Output Matrix:\n");

    for(i = 0; i < row3; i++)
    {
        for(j = 0; j < col3; j++)
        {
            printf(" %-3d", matrix3[i][j]);
        }
        printf("\n");
    } 

    return;
}

//!=============================> .MAIN (Entry point)
int main(void)
{   
    /* Variables Declaration */
    int matrix1[256][256], matrix2[256][256],
        row1, col1,        row2, col2;

    /* Get the user input */

    // Make sure the users doesn't break the condition.
    while( (1) )
    {
        printf("\n Enter rows and columns for first matrix: ");
        scanf("%d", &row1);
        scanf("%d", &col1);

        printf("\n Enter rows and columns for second matrix: ");
        scanf("%d", &row2);
        scanf("%d", &col2);

        // Error handler.
        if( (col1 != row2) )
        { printf("\n Error. Please make sure that (Matrix1_COL == Matrix2_ROW).\n"); }

        else
        { break; }
    }

    printf("\n Enter elements of matrix 1:\n");
    
    int i, j;
    for(i = 0; i < row1; i++)
    {
        for(j = 0; j < col1; j++)
        {   
            printf(" Enter element a%d%d: ", i+1, j+1);
            scanf("%d", &matrix1[i][j]);
        }
    }

    printf("\n Enter elements of matrix 2:\n");
    
    for(i = 0; i < row2; i++)
    {
        for(j = 0; j < col2; j++)
        {   
            printf(" Enter element a%d%d: ", i+1, j+1);
            scanf("%d", &matrix2[i][j]);
        }
    }
    

    /* Print the result */
    MatrixMultiplication(matrix1, row1, col1, 
                         matrix2, row2, col2);

    printf("\n");
    return 0;
}
//!=============================> .END
