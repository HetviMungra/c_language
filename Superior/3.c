//Write a C program to find the smallest  element in an array.

#include <stdio.h>
 
int main()
{
    int n, i, smallest ;
    int array[n];  
 
    printf("\n Enter the size of the array: ");
    scanf("%d", &n);  
    printf("\n Enter %d elements of the array: \n", n);
 
    for (i = 0; i < n; i++)
    {   
        printf("element  %d : ",i);
        scanf(" %d", &array[i]);
    }
 
   smallest  = array[0];
 
    for (i = 1; i < n ; i++) 
    {
        if (smallest  > array[i])
        {
       		smallest  = array[i];
		}
        
    }
 
    printf("\n largest element present in the given array is : %d", smallest );
 
 
 }

