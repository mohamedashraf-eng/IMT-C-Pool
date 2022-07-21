/**
 * @file p5.c
 * @author Mohamed Wx (gtlyco205@gmail.com)
 * @brief 05-Switch Case-Solution.
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
    float input_number_a, input_number_b, input_number_c;

    float root1, root2, 
          imaginary, discriminant;

    int condition;

    /* Get the user input */
    printf("\n Enter values of a, b, c of quadratic equation (aX^2 + bX + c): ");
    scanf("%f", &input_number_a);
    scanf("%f", &input_number_b);
    scanf("%f", &input_number_c);

    /* Do the operation */
    /*
        Conditions: 
        1- Discriminant positive.
            - Two real roots.    (Math Equation)

        2- Discriminant negative.
            - Two complex roots. (Math Equation)

        3- Discriminant Zero.
            - Two real roots.    (Math Equation)
    */
   
    discriminant = pow(input_number_b, 2) - (4 * input_number_a * input_number_c);

    condition = (discriminant > 0);

    switch(condition)
    {
        case 0: condition = (discriminant < 0);

                switch(condition)
                {
                    case 0:
                            root1 = ( (-input_number_b) / (2*input_number_a) );
                            root2 = ( (-input_number_b) / (2*input_number_a) );

                            /* Print the output */
                            printf("Two equal and real roots exists: %.2f and %.2f", root1, root2);
                            break;
                    case 1:
                            root1 =     ( (-input_number_b) / (2*input_number_a) );
                            root2 =     ( (-input_number_b) / (2*input_number_a) );
                            imaginary = ( sqrt(-discriminant) / (2 * input_number_a) );

                            /* Print the output */
                            printf("Two distinct complex roots exists: %.2f + i%.2f and %.2f - i%.2f", 
                                                                       root1, imaginary, root2, imaginary);
                            break;

                    default: printf("\n Invalid input."); break;
                }//end switch 1.
                break; // Case 0 switch 0.
        case 1:
                root1 = ( (-input_number_b + sqrt(discriminant)) / (2 * input_number_a) );
                root2 = ( (-input_number_b - sqrt(discriminant)) / (2 * input_number_a) );

                /* Print the output */
                printf("Two distinct and real roots exists: %.2f and %.2f", root1, root2);
                break;

        default: printf("\n Invalid input"); break;
    }//end switch 0.

    printf("\n"); 
    return 0;
}
//!=============================> .END
