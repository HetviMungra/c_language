#include<stdio.h>
main()
{
    int arr[5] ,sum=0;
    for(int i=0;i<5;i++)
    {
        printf("Enter the value:");
        scanf("%d",&arr[i]);
        sum+=arr[i];
    }
        printf("Ans:%d",sum);
    }
