#include <stdio.h>
int calculateFactorial(int n) {
    if (n == 0 || n == 1)
       {
       	 return 1;
	   }
    else
        {
        	return n * calculateFactorial(n - 1);
		}
}

 main() {
    int n,factorial;
    printf("Enter a positive integer: ");
    scanf("%d", &n);
    factorial = calculateFactorial(n);
    printf("The factorial  is: %d\n", factorial);
}

