#include <stdio.h>
#include <math.h>

void main() {
	int i;
    double principal, rate, time, amount, interest;

    // Get the principal amount
    printf("Enter principal amount: ");
    scanf("%lf", &principal);

    // Get the annual interest rate
    printf("Enter annual interest rate (in percentage): ");
    scanf("%lf", &rate);

    // Get the time period
    printf("Enter time (in years): ");
    scanf("%lf", &time);

    // Initialize the amount to the principal
    amount = principal;

    // Calculate the compound interest using a loop
    for (int i = 0; i < 10; i++)
	 {
        // Calculate the amount after one year
        amount = amount * (1 + rate / 100);
    }

    // Calculate the compound interest
    interest = amount - principal;

    // Print the result
    printf("Compound Interest: %.2lf\n", interest);


}
