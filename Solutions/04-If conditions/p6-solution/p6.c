/**
 * @file p6.c
 * @author Mohamed Wx (gtlyco205@gmail.com)
 * @brief 06-If Condition-Solution.
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

    int note_500 = 0, note_100 = 0, 
        note_50 = 0, note_20 = 0, 
        note_10 = 0, note_5 = 0, 
        note_2 = 0, note_1 = 0;

    /* Get the user input */
    printf("\n Enter amount: ");
    scanf("%d", &input_number);
    
    /* Do the operation */
    /*
        Using discrete if conditions. (stacked if)
    */

    if( (input_number >= 500) )
    {
        note_500 = input_number/500;
        input_number = input_number - (note_500 * 500);
    }
    else;
    if( (input_number >= 100) )
    {
        note_100 = input_number/100;
        input_number = input_number - (note_100 * 100);
    }
    else;
    if( (input_number >= 50) )
    {
        note_50 = input_number/50;
        input_number = input_number - (note_50 * 50);
    }
    else;
    if( (input_number >= 20) )
    {
        note_20 = input_number/20;
        input_number = input_number - (note_20 * 20);
    }
    else;
    if( (input_number >= 10) )
    {
        note_10 = input_number/10;
        input_number = input_number - (note_10 * 10);
    }
    else;
    if( (input_number >= 5) )
    {
        note_5 = input_number/5;
        input_number = input_number - (note_5 * 5);
    }
    else;
    if( (input_number >= 2) )
    {
        note_2 = input_number/2;
        input_number = input_number - (note_2 * 2);
    }
    else;
    if( (input_number >= 2) )
    {
        note_1 = input_number/1;
        input_number = input_number - (note_1 * 1);
    }
    else;

    /* Print the result */
    printf("\n Total number of notes = \n");
    printf("\n 500 = %d", note_500);
    printf("\n 100 = %d", note_100);
    printf("\n 50 = %d", note_50);
    printf("\n 20 = %d", note_20);
    printf("\n 10 = %d", note_10);
    printf("\n 5 = %d", note_5);
    printf("\n 2 = %d", note_2);
    printf("\n 1 = %d", note_1);

    printf("\n");
    return 0;
}
//!=============================> .END
