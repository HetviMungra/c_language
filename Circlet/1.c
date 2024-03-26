#include <stdio.h>

int main()
{
    int i, j;
    for(i=41;i<=5;i++)
    {
        for(j=41;j<=i;j++)
        {
            printf("%3d",j);
        }
        printf("\n");
    }

}
