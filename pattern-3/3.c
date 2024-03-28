#include <stdio.h>
int main()
{
    int i, j;

    for(i=1; i<=5; i++)
    {
      
        for(int k=1; k<=i; k++)
        {
            printf(" ");
        }

        for(j=1; j<=4; j++)
        {
            printf("*");
        }

        printf("\n");
    }

}