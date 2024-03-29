#include<stdio.h>
int main()
{
    int arr[5] ;
    int sum=0, avg;
    for(int i=0;i<5;i++)
    {
        printf("Enter the value:");
        scanf("%d",&arr[i]);
        sum+=arr[i];
    }
        avg = sum /2 ;
    printf("Average = %d", avg);
}
