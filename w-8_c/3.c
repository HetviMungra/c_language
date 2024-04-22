#include <stdio.h>
void main()

{
	int a,i;
	printf("Enter your number:");
	scanf("%d",&a);
	for(int i=1;i<=a;i++)
	{
		printf("%d",i);
	}
	printf("\n");
	for(int i=a;i>=1;i--)
	{
		printf("%d",i);
	}
	
}
