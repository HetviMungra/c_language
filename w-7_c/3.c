#include <stdio.h>
void main()
{
	int a,b,c;
	printf("Enter first number:");
	scanf("%d",&a);
	printf("Enter second number:");
	scanf("%d",&b);
	printf("Enter third number:");
	scanf("%d",&c);
	if(a>b && a>c )
	{
		printf("A is Largest ");
	}
	else if(b>c)
	{
	    printf("B is Largest ");	
	}
	else
	{
		printf("C is Largest ");
	}
}
