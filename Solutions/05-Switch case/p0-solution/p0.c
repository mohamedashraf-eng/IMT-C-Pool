/**
 * @file p0.c
 * @author Mohamed Wx (gtlyco205@gmail.com)
 * @brief 00-Switch Case-Solution.
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
#include <math.h>

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

    /* Get the user input */
    printf("\n Enter week number(1-7): ");
    scanf("%d", &input_number);


    /* Do the operation */
    switch(input_number)
    {           /* Print the result */
        case 1: printf("\n Monday.");           break;
        case 2: printf("\n Tuesday.");          break;
        case 3: printf("\n Wednesday.");        break;
        case 4: printf("\n Thursday.");         break;
        case 5: printf("\n Friday.");           break;
        case 6: printf("\n Saturday.");         break;
        case 7: printf("\n Sunday.");           break;
        default: printf("\n Invalid input.");   break;
    }

    printf("\n"); 
    return 0;
}
//!=============================> .END
