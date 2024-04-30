#include <stdio.h>

int main()
{
    int num, i, is_prime = 1;

    printf("Enter a number: ");
    scanf("%d", &num);

    do {
        if (num % 2 == 0) {
            is_prime = 0;
            break;
        }
        i++;
    } while (i * i <= num);

    if (is_prime && num > 1) {
        printf("%d is a prime number.\n", num);
    } else {
        printf("%d is not a prime number.\n", num);
    }
}
