#include <stdio.h>

int main() 
{
	int first=0,second=1,next,i=0,ans;
    
    printf("Enter Number : ");
    scanf("%d",&next);
    
    while(i<=next)
    {
        printf("%d  ",first);
        ans=first+second;
        first=second;
        second=ans;
        i++;
    }


}
