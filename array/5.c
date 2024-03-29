#include<stdio.h>
main(){
    int arr[5],even=1;

    for(int i=0; i<=4; i++)
    {
        printf("Enter Array Value: ");
        scanf("%d",&arr[i]);
    }
    for(int i=0; i<=4; i++)
    {
        if(arr[i]%2==0)
        {
            even *= arr[i];
        }
    }
    printf("Even Number Multiplication is : %d",even);
}