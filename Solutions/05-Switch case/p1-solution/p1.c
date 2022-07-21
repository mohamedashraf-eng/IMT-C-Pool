/**
 * @file p1.c
 * @author Mohamed Wx (gtlyco205@gmail.com)
 * @brief 01-Switch Case-Solution.
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
    printf("\n Enter month number(1-12): ");
    scanf("%d", &input_number);


    /* Do the operation */
    switch(input_number)
    {            /* Print the result */
        case 1:  printf("\n 31 days.");         break; // Jan.
        case 2:  printf("\n 28/29 days.");      break; // Feb.
        case 3:  printf("\n 31 days.");         break; // Mar.
        case 4:  printf("\n 30 days.");         break; // April.
        case 5:  printf("\n 31 days.");         break; // May.
        case 6:  printf("\n 30 days.");         break; // June.
        case 7:  printf("\n 31 days.");         break; // July.
        case 8:  printf("\n 31 days.");         break; // Aug.
        case 9:  printf("\n 30 days.");         break; // Sep.
        case 10: printf("\n 31 days.");         break; // Oct.
        case 11: printf("\n 30 days.");         break; // Nov.
        case 12: printf("\n 31 days.");         break; // Dec.
        default: printf("\n Invalid input.");   break;
    }

    printf("\n"); 
    return 0;
}
//!=============================> .END
