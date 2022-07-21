/**
 * @file p7.c
 * @author Mohamed Wx (gtlyco205@gmail.com)
 * @brief 07-Switch Case-Solution.
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
    char input_number; 
    int input_shifting, input_direction;

    int size_of_char = (sizeof(char) * 8), rotation = 0;

    /* Get the user input */
    printf("\n Enter the number: ");
    scanf("%d", &input_number);

    printf("\n Enter the value of shifting: ");
    scanf("%d", &input_shifting);

    printf("\n Enter direction of shifting(R: 0, L: 1): ");
    scanf("%d", &input_direction);

    /* Do the operation */
    switch(input_direction)
    {
        // Right Rotation.
        case 0: 
                rotation = ( (input_number << input_shifting) | (input_number >> (size_of_char - input_shifting)) );

                /* Print the result */
                printf("\n Number before right rotation = %d", input_number);
                printf("\n Number after right rotation by %d = %d", input_shifting, rotation);

                break;
        // Left Rotation.
        case 1:
                rotation = ( (input_number >> input_shifting) | (input_number << (size_of_char - input_shifting)) );
                
                /* Print the result */
                printf("\n Number before left rotation = %d", input_number);
                printf("\n Number after left rotation by %d = %d", input_shifting, rotation);

                break;

        default: printf("\n Invalid input."); break;
    }

    printf("\n"); 
    return 0;
}
//!=============================> .END
