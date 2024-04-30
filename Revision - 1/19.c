#include <stdio.h>

int main()
{
	int sum_num,sum=0,i;
    printf("Enter Number : ");
    scanf("%d",&sum_num);
    for( i=1; i<=sum_num; i++)
    {
        sum+=i;
    }
    printf("Sum Of All Number : %d",sum);
    printf("\n\n");
}
