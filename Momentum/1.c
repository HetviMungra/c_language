#include<stdio.h>
main()
{
    int a;
    printf("Enter the value of 'a':");
    scanf("%d",&a);
    (a%2==0) ? printf("This number is even..") : printf("This number is odd...");
}