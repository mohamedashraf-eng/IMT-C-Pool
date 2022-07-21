/**
 * @file p4.c
 * @author Mohamed Wx (gtlyco205@gmail.com)
 * @brief 04-If Condition-Solution.
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
    int input_number1, input_number2, 
        input_number3, input_number4, 
        input_number5;

    /* Get the user input */
    printf("\n Enter the five numbers: ");
    scanf("%d", &input_number1);
    scanf("%d", &input_number2);
    scanf("%d", &input_number3);
    scanf("%d", &input_number4);
    scanf("%d", &input_number5);    
    
    /* Do the operation */
    /*
        Using discrete if conditions. (stacked if)
    */
    printf("\n The numbers that are divisible by 3 are: ");
    if( (input_number1%3 == 0) )
    {printf("\n %d", input_number1);} else;
    if( (input_number2%3 == 0) )
    {printf("\n %d", input_number2);} else;
    if( (input_number3%3 == 0) )
    {printf("\n %d", input_number3);} else;
    if( (input_number4%3 == 0) )
    {printf("\n %d", input_number4);} else;
    if( (input_number5%3 == 0) )
    {printf("\n %d", input_number5);} else;

    printf("\n");
    return 0;
}
//!=============================> .END
