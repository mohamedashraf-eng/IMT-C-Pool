/**
 * @file p6c
 * @author Mohamed Wx (gtlyco205@gmail.com)
 * @brief 06-For-Solution.
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
    int input_number;

    int last_term = 1, current_term = 0, next_term = 0;

    /* Get the user input */
    printf("\n Enter the number of terms: ");
    scanf("%d", &input_number);


    /* Do the operation */
    /*
        Fibonacci series = (n-1) + (n) ...

        Next = Last + Current.
        By updating the last and the previous current with the new values. We will get track of the latest (last, current).
                       Last  Cur  Next     
                        |    |    | ...
        FB = [0]  [1]  [1]  [2]  [3]  [5] ... 
    */
    printf("\n Fibonacci Series: 0, ");
    int i;
    for(i = 0; i < input_number; i++)
    {
        next_term = current_term + last_term;

        last_term = current_term;
        current_term = next_term;

        /* Print the result */
        printf("%d, ", current_term);
    }

    printf("\n");
    return 0;
}
//!=============================> .END
