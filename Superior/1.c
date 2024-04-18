//Write a C program to find the sum of elements in an array.

#include <stdio.h>    
int main()    
{    
   int a[100];  
    int i, n, sum = 0;  
   printf("Enter array size:");
       scanf("%d",&n);
   
       printf("Input %d elements in the array :\n",n);
       
       for(i=0;i<n;i++)
        {
//	      printf("element  %d : ",i);
	      scanf("%d",&a[i]);
	    }

    for(i=0; i<n; i++)
    {
        sum += a[i];
    }

    printf("Sum of all elements stored in the array is : %d\n\n", sum);  
}    
