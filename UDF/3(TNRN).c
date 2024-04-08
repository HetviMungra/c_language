#include<stdio.h>
printtable(int a)
{
	printf("Enter Number for Table:");
	scanf("%d",&a);
	
	for(int i=1;i<=10;i++)
	{
		printf("\n%d * %d = %d",a,i,a*i);
	}
}
void main()
{
	int a1;
	printtable(a1);
}
