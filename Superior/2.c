//Write a C program to find the largest element in an array.

#include <stdio.h>
 
int main()
{
    int n, i, largest;
    int array[n];  
 
    printf("\n Enter the size of the array: ");
    scanf("%d", &n);  
    printf("\n Enter %d elements of the array: \n", n);
 
    for (i = 0; i < n; i++)
    {   
        printf("element  %d : ",i);
        scanf(" %d", &array[i]);
    }
 
    largest = array[0];
 
    for (i = 1; i < n ; i++) 
    {
        if (largest > array[i])
        {
        largest = array[i];
		}
        
    }
 
    printf("\n largest element present in the given array is : %d", largest);
 
 
 }

