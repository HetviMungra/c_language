#include<stdio.h>
main(){
	int i,k,j;
for( i=1;i<=5;i++) 
{
        for( k=4;k>=i;k--)
        {
            printf("  ");
        }
        for( j=1;j<=i*2-1;j++)
        {
        printf(" *") ; 
        }
    printf("\n");
}
}


