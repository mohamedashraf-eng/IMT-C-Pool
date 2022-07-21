/**
 * @file p11.c
 * @author Mohamed Wx (gtlyco205@gmail.com)
 * @brief 11-Functions-Solution.
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
!-                      DECLARED FUNCTIONS                     -
----------------------------------------------------------------
*/

/* Do the operation */
void MyPowerFunctions(int number, int power)
{
    double xtoy  = 1, 
           xtony = 0;

    int i;
    for(i = 0; i < power; i++)
    {
        xtoy *= number;
    }

    xtony = ( 1.0f / xtoy );

    printf("\n %d power to %d  = %lf", number, power, xtoy);
    printf("\n %d power to -%d = %lf", number, power, xtony);

    return;
}

//!=============================> .MAIN (Entry point)
int main(void)
{   
    /* Variables Declaration */
    int input_number1, input_number2;

    /* Get the user input */
    printf("\n Enter value of number: ");
    scanf("%d", &input_number1);

    printf("\n Enter value of power: ");
    scanf("%d", &input_number2);

    /* Prin the result */
    MyPowerFunctions(input_number1, input_number2);


    printf("\n");
    return 0;
}
//!=============================> .END
