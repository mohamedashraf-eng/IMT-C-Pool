/**
 * @file p2.c
 * @author Mohamed Wx (gtlyco205@gmail.com)
 * @brief 02-Structs-Solution.
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

struct Time
{
    float hours, minutes, seconds;
};

//!=============================> .MAIN (Entry point)
int main(void)
{   
    /* Variables Declaration */
    struct Time t1, 
                t2, 
                diff;

    /* Get the user input */
    printf("\n Enter start time: ");
    printf("\n Enter hours, minutes, seconds respectively: ");
    scanf("%f", &t1.hours); scanf("%f", &t1.minutes); scanf("%f", &t1.seconds);

    printf("\n Enter stop time: ");
    printf("\n Enter hours, minutes, seconds respectively: ");
    scanf("%f", &t2.hours); scanf("%f", &t2.minutes); scanf("%f", &t2.seconds);

    /* Do the operation */
    diff.hours   = (t1.hours   - t2.hours);
    diff.minutes = (t1.minutes - t2.minutes);
    diff.seconds = (t1.seconds - t2.seconds);

    /* Printf the result */
    printf("\n TIME DIFFERENCE: %.0f:%.0f:%.0f - %.0f:%.0f:%.0f = %.0f:%.0f:%.0f",
                                t1.hours, t1.minutes, t1.seconds,
                                t2.hours, t2.minutes, t2.seconds,
                                diff.hours, diff.minutes, diff.seconds);

    printf("\n");
    return 0;
}
//!=============================> .END