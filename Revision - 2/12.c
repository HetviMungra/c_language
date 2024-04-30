#include <stdio.h>
#include <string.h>

int main()
{
     char com_str1[100],com_str2[100];
    int compare,i,j;
    
    printf("Enter First String : ");
    scanf("%s",&com_str1);
    printf("Enter Second String : ");
    scanf("%s",&com_str2);
    for(i=0; com_str1[i]; i++)
    {
        for( j=0; com_str2[j]; j++)
	    {
	        if(com_str1[i] == com_str2[j]) 
			{
		        compare = 0;
		    } 
			else 
			{
		        compare = 1;
		    }
	    }
    }
    if(compare == 0) 
	{
        printf("Both Strings are Equal...");
    } 
	else 
	{
        printf("Both Strings are Not Equal...");
    }
    
    
}
