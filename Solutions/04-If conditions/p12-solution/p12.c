/**
 * @file p12.c
 * @author Mohamed Wx (gtlyco205@gmail.com)
 * @brief 12-If Condition-Solution.
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

    float result = 0.0f;

    /* Get the user input */
    printf("\n Enter basic salary of an employee: ");
    scanf("%d", &input_number);


    /* Do the operation */
    /*
        Conditions:
            1- First 50    : (0.50/unit)
            2- next 100    : (0.75/unit)
            3- next 100    : (1.20/unit)
            4- above 250   : (1.50/unit)
            5- Global      : (+20% subcharge) of total.
    */

    if( (input_number <= 50) ) // +50
    {   
        result  = ( (input_number * 0.50) );
        result += ( (result * 0.20)       );
    
        /* Print the result */
        printf("\n Electricity Bill = Rs. %.2f", result);
    }
    else if( (input_number <= 150) ) // +100
    {   
        result  = ( (input_number * 0.75) );
        result += ( (result * 0.20)       );

        /* Print the result */
        printf("\n Electricity Bill = Rs. %.2f", result);
    }
    else if( (input_number <= 250) ) // +100
    {   
        result  = ( (input_number * 1.20) );
        result += ( (result * 0.20)       );
        /* Print the result */
        printf("\n Electricity Bill = Rs. %.2f", result);
    }
    else if( (input_number > 250) )
    {   
        result  = ( (input_number * 1.50) );
        result += ( (result * 0.20)       );

        /* Print the result */
        printf("\n Electricity Bill = Rs. %.2f", result);
    }
    else;

    printf("\n"); 
    return 0;
}
//!=============================> .END
