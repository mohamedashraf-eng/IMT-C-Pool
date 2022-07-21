/**
 * @file p14.c
 * @author Mohamed Wx (gtlyco205@gmail.com)
 * @brief 14-If Condition-Solution.
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
    float input_number_velocity, input_number_temperature;

    float wind_chill_index = 0.0f;

    /* Get the user input */
    printf("\n Enter wind speed in mph: ");
    scanf("%f", &input_number_velocity);

    printf("\n Enter temprature in Fahrenheit: ");
    scanf("%f", &input_number_temperature);

    /* Do the operation */
    /*
        
    */

    if( (input_number_velocity >= 0) && (input_number_velocity <= 4))
    { wind_chill_index = input_number_temperature; }
    else if( (input_number_velocity >= 45) )
    { wind_chill_index = ( (1.6 * input_number_temperature) - 55 ); }
    else
    {
        wind_chill_index = 91.4 + (91.4 - input_number_temperature) * 
                           ((0.0203 * input_number_velocity) - ((0.304 * pow(input_number_velocity, 0.5))) - 0.474);
    }

    /* Print the result */
    printf("\n For wind speed = %.2f and temprature = %.2f", input_number_velocity, input_number_temperature);
    printf("\n Wind Chill Index: %.2f", wind_chill_index);    

    printf("\n"); 
    return 0;
}
//!=============================> .END
