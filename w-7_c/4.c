#include <stdio.h>
void main()
{
	int a;
	printf("Enter a Year:");
	scanf("%d",&a);
	if(a%4==0)
	{
		printf("Leap Year ..");
	}
	else
	{
		printf(" NOT Leap Year ...");
	}
}
