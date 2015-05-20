//
//  TaxPerson.c
//
//  Created by Reena on 5/20/15.
//


#include <stdio.h>

/* Tax percentage */
#define TAX_BASIC 1
#define TAX_LUX   9

/* Item Types */
enum itemType
{
    BASIC,
    LUXUARY
};

/* Function Header */
double calculateCost(int baseCost, enum itemType type);


/* Unit Testing of the function */
int main() {
    
    /* Unit Test the Logic */
    double cost = 10.00, totalCost = 0.00;
    enum itemType item = LUXUARY;
    
    /* Test Case 1 - Luxary item */
    totalCost = calculateCost(cost, item);
    printf("\nBase Cost: %f Cents, Total Cost: %f Cents", cost, totalCost);
    
    /* Test Case 2 - Basic item */
    item = BASIC;
    totalCost = calculateCost(cost, item);

    printf("\nBase Cost: %f Cents, Total Cost: %f Cents", cost, totalCost);

}


/* 
** Function to calculate the total cost of a given item.
*/
double calculateCost(int baseCost, enum itemType type)
{
    double taxPercent = 1.0;
    double taxAmount  = 0;
    
    if (type == LUXUARY) {
        taxPercent = (double)TAX_LUX;
    }
    
    taxAmount = (baseCost * taxPercent) / (double) 100;
    
    return ((double)baseCost + taxAmount);
    
}
