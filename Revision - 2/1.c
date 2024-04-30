#include <stdio.h>

int main()
{
	int o;
    printf("Enter any Number : ");
    scanf("%d",&o);
    if(o % 2 == 0)
    {
        printf("%d Number is Even...",o);
    }
    else
    {
        printf("%d Number is Odd...",o);
    }
}
