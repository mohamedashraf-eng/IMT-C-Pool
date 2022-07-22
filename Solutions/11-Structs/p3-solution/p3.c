/**
 * @file p3.c
 * @author Mohamed Wx (gtlyco205@gmail.com)
 * @brief 03-Structs-Solution.
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

struct Item
{
    char name[256];
    float price;
    int quantity;
};

struct Item myItem = {.name = "XYZ", .price = 25.75, .quantity = 12};

/*
----------------------------------------------------------------
!-                      FUNCTION DECLARED                      -
----------------------------------------------------------------
*/
void UpdateItem(int, int);

//!=============================> .MAIN (Entry point)
int main(void)
{   
    /* Variables Declaration */
    int price, quantity;

    /* Get the user input */
    printf("\n Input increment values: price increment and quantity increment: ");
    scanf("%d", &price);
    scanf("%d", &quantity);

    /* Do the operation */
    UpdateItem(price, quantity);

    /* Printf the result */
    printf("\n Updated values of item: \n");
    printf("\n Name: %s\n Price: %f\n Quantity: %d", myItem.name, myItem.price, myItem.quantity);

    printf("\n Value of the item: %f", (myItem.price * myItem.quantity));

    printf("\n");
    return 0;
}

/*
----------------------------------------------------------------
!-                      FUNCTION IMPLEMENTATION                -
----------------------------------------------------------------
*/

/**
 * @brief Function to update passed item value.
 * 
 * @param priceINC 
 * @param quantityINC 
 */
void UpdateItem(int priceINC, int quantityINC)
{
    myItem.price    += priceINC;
    myItem.quantity += quantityINC;

    return;
}//end UpdateItem.
//!=============================> .END