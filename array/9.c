#include<stdio.h>
main()
{
     int arr[5];
    printf("Enter array elements::");
    for (int i = 0; i < 4; i++)
    {
        scanf("%d",&arr[i]);

    }
     for (int j = 0; j < 4; j++)
    {
    printf(" The squares are: %d\n",arr[j]*arr[j]);

    }
}