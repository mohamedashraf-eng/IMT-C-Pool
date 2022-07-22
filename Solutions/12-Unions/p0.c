/**
 * @file p0.c
 * @author Mohamed Wx (gtlyco205@gmail.com)
 * @brief 00-Enums-Solution.
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
!-                      DEFINED ENUMS                          -
----------------------------------------------------------------
*/

enum months {JAN = 1, FEB, MAR, APRIL, MAY, JUNE, JULY, AUG, SEP, OCT, NOV, DEC};

//!=============================> .MAIN (Entry point)
int main(void)
{   
    /* Printf the result */
    printf("\n jan  = %d", JAN);
    printf("\n feb  = %d", FEB);
    printf("\n june = %d", JUNE);
    printf("\n dec  = %d", DEC);

    printf("\n");
    return 0;
}
//!=============================> .END