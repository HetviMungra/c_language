
#include<stdio.h>
main()
{
    int arr[5],max=arr[0];
    for(int i=0;i<5;i++)
    {
        printf("Enter the value:");
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<5;i++)
    {
     if(arr[i] > max)
     {
        max=arr[i];
     }
    } 
    printf("%d\n",max);      
    }

