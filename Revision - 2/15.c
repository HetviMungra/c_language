#include <stdio.h>
#include <string.h>
int main()
{
    char len_str[100];
    int count=0,i;
    printf("Enter String : ");
    scanf("%s",&len_str);
    for( i=0; len_str[i]; i++)
    {
        count++;
    }
    printf("Length Of String is : %d",count);

    
    return 0;
}	
}
