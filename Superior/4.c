//Write a C program to count the number of even and odd elements in an array.
#include<stdio.h>
//#include<conio.h>
int main()
{
    
	int even=0, odd=0, i,n;
    int arr[n];
    
    printf("\n Enter the size of the array: ");
    scanf("%d", &n);  
    printf("\n Enter %d elements of the array: \n", n);
 
    printf("Enter any elements: ");
    for(i=0; i<n; i++)
    {
    	printf("element  %d : ",i);
        scanf("%d", &arr[i]);
	}
    for(i=0; i<n; i++)
    {
        if(arr[i]%2==0)
            {
            	even++;
            	printf("even: %d",even);
			}
        else
            {
            	odd++;
            	printf("odd:%d",odd);
			}
    }
    printf("\nTotal Even numbers = %d", even);
    printf("\nTotal Odd numbers = %d", odd);
   
   
   
   
}
