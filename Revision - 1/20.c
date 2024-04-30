#include <stdio.h>

int main()
{
	int table,i;
    printf("Enter Ending Point : ");
    scanf("%d",&table);
    
    for( i=1; i<=10; i++)
    {
        printf("\n%d * %d = %d",table,i,table*i);
    }

}

