#include <stdio.h>
main()
{
    int a,b,c;
    printf("Enter the first number:");
    scanf("%d",&a);
    printf("Enter the second number:\n");
    scanf("%d",&b);
    c=a;
    a=b;
    b=c;
    printf("\nafter swaping first number: %d\n",a);
    printf("after swaping second number:%d\n",b);
}