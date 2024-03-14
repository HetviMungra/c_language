#include <stdio.h>

int main()
{
    int unit;
    float a, total, charge;

    printf("Enter electricity units: ");
    scanf("%d", &unit);
    if(unit <= 50)
    {
        a = unit * 0.50;
    }
    else if(unit <= 150)
    {
        a = 25 + ((unit-50) * 0.75);
    }
    else if(unit <= 250)
    {
        a = 100 + ((unit-150) * 1.20);
    }
    else
    {
        a = 220 + ((unit-250) * 1.50);
    }

   
    charge = a * 0.20;
    total  = a + charge;

    printf("Electricity Bill = Rs. %.2f", total);

}

// Write a Program to input electricity unit charges and calculate the total electricity bill according to the given condition:
// For the first 50 units Rs. 0.50/unit
// For the next 100 units Rs. 0.75/unit
// For the next 100 units Rs. 1.20/unit
// For units above 250 Rs. 1.50/unit
// An additional surcharge of 20% is added to the bill.
// For example,
// Input:
// Enter electricity units: 435

// Output: 
// Electricity Bill = Rs. 597.00
