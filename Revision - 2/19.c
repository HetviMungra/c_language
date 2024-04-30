#include<stdio.h>
void main()
{
	 int sqrt_num, sqrt,i;
    printf("Enter Any Number : ");
    scanf("%d",&sqrt_num);

    for( i = 0;  i * i <= sqrt_num; i++)
	{
        sqrt = i;
    }

    printf("square root is : %d", sqrt);


}
