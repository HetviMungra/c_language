#include <stdio.h>
int main()
{
    int a, b, c;
    printf("Enter first angles of triangle: ");
    scanf("%d", &a);
    printf("Enter second angles of triangle: ");
    scanf("%d", &b);

    c = 180 - (a + b);

    printf("Third angle of the triangle = %d", c);

}