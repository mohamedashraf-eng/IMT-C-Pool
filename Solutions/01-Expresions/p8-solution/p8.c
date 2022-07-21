/**
 * @file p8.c
 * @author Mohamed Wx (gtlyco205@gmail.com)
 * @brief 08-Expresions-Solution.
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
    int mark_1, mark_2, 
        mark_3, mark_4, 
        mark_5;

    int total_marks_number = 5;

    float total_marks, avreage_marks, marks_percentage;

    /* Get the user input */
    printf("Enter marks of five subjects: \n");
    scanf("%d \
           %d  \
           %d   \
           %d    \
           %d", &mark_1, &mark_2, &mark_3, &mark_4, &mark_5);
        
    /* Calculate the total & avreage & precentage */
    total_marks      = ( mark_1 + mark_2 + mark_3 + mark_4 + mark_5 );
    avreage_marks    = ( total_marks / total_marks_number );
    marks_percentage = ( (total_marks / 500.0f) * 100.0f );

    /* Print the result */
    printf("\n Total marks = %.2f ", total_marks);
    printf("\n Total marks = %.2f ", avreage_marks);
    printf("\n Total marks = %.2f ", marks_percentage);

    printf("\n");
    return 0;
}


//!=============================> .END
