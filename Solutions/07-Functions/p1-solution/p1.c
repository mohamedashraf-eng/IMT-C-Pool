/**
 * @file p1.c
 * @author Mohamed Wx (gtlyco205@gmail.com)
 * @brief 01-Functions-Solution.
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
!-                      DECLARED FUNCTIONS                     -
----------------------------------------------------------------
*/

/* Do the operation */
void DiameterCircumferenceArea(float radius)
{
    float Diameter      = 0.0f, 
          Circumference = 0.0f, 
          Area          = 0.0f;
    
    float PI = 3.14159;

    Diameter      = ( 2  * radius );
    Circumference = ( 2  * PI * radius );
    Area          = ( PI * (radius * radius) );

    /* Print the result */
    printf("\n Diameter of the circle = %.2f units", Diameter);
    printf("\n Circumference of the circle = %.2f units", Circumference);
    printf("\n Area of the circle = %.2f sq. units", Area);

    return;
}

//!=============================> .MAIN (Entry point)
int main(void)
{   
    /* Variables Declaration */
    float input_number;

    /* Get the user input */
    printf("\n Enter radius of circle: ");
    scanf("%f", &input_number);

    /* Print the result */
    DiameterCircumferenceArea(input_number);
    
    printf("\n");
    return 0;
}
//!=============================> .END
