#include<stdio.h>
int calculateSumOfSquares(int n)
{
	int sum=0,i;
	for(i=1; i<=n; i++)
	{
		if(i%2==0)
		{
			sum+=(i*i);
		}
			
	}
	return sum;
}
main(){
	int n;
	printf("Enter the value:");
	scanf("%d",&n);

	printf("The sum of squares of even %d\n",calculateSumOfSquares(n));
	
}
