#include <stdio.h>
#include <string.h>

int main()
{
    char str[100],i;
    int count=0;
    printf("Enter String : ");
    scanf("%s",&str);
    for(i=0; str[i]; i++)
    {
        count++;
    }
    printf("Reverse String : ");
    for(i=count-1; str[i]>=0; i--)
    {
        printf("%c",str[i]);
    }
}
