#include <stdio.h>

int main() 
{
    
    int fact=1, num_fact,i;
    printf("Enter Any Number : ");
    scanf("%d",&num_fact);
    for( i=1; i<=num_fact; i++)
    {
        fact = fact*i;
    }
    printf("Factorial Number is : %d",fact);
}
