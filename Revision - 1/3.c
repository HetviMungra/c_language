#include<stdio.h>
void main()
{
	int i,size_rev, arr_rev[size_rev];
    printf("Enter Array Size : ");
    scanf("%d",&size_rev);
    for( i=0; i<size_rev; i++)
    {
        printf("a[%d] = ",i);
        scanf("%d",&arr_rev[i]);
    }
    printf("\n**After Reverse**\n");
    for( i=size_rev-1; i>=0; i--)
    {
        printf("\na[%d] = %d",i,arr_rev[i]);
    }
}
