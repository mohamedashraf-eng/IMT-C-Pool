/**
 * @file p0.c
 * @author Mohamed Wx (gtlyco205@gmail.com)
 * @brief 00-Structs-Solution.
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

struct Distances
{
    float feet, 
          inch;
};

//!=============================> .MAIN (Entry point)
int main(void)
{   
    /* Variables Declaration */
    struct Distances distance1, 
                     distance2;

    float feetSum = 0.0, 
          inchSum = 0.0;

    /* Get the user input */
    printf("\n Enter information for 1st distance: \n");
    printf(" Enter feet: "); scanf("%f", &distance1.feet);
    printf(" Enter inch: "); scanf("%f", &distance1.inch);

    printf("\n Enter information for 2nd distance: \n");
    printf(" Enter feet: "); scanf("%f", &distance2.feet);
    printf(" Enter inch: "); scanf("%f", &distance2.inch);

    /* Do the operation */
    feetSum = (distance1.feet + distance2.feet);
    inchSum = (distance1.inch + distance2.inch);

    if( (inchSum > 12.0) )
    {
        inchSum = (inchSum - 12.0);
        feetSum++;
    }
    
    /* Printf the result */
    printf("\n Sum of distances = %.0f\'-%.1f\" ", feetSum, inchSum);

    printf("\n");
    return 0;
}
//!=============================> .END