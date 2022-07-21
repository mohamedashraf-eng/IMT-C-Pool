/**
 * @file p7.c
 * @author Mohamed Wx (gtlyco205@gmail.com)
 * @brief 07-If Condition-Solution.
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
    int input_number_cost, input_number_selling;

    int profit = 0, loss = 0;

    /* Get the user input */
    printf("\n Enter cost price: ");
    scanf("%d", &input_number_cost);

    printf("\n Enter selling price: ");
    scanf("%d", &input_number_selling);   

    /* Do the operation */
    /*
        if(selling < cost): Loss.
        else: profit.

        Profit = Loss = abs(Selling_Price - Cost_Price)
    */

    if( (input_number_selling < input_number_cost) )
    {
        loss = abs(input_number_selling - input_number_cost);
        
        /* Print the result */
        printf("\n Loss = %d", loss);
    }
    else
    {
        profit = abs(input_number_selling - input_number_cost);

        /* Print the result */
        printf("\n Profit = %d", profit);
    }

    printf("\n");
    return 0;
}
//!=============================> .END
