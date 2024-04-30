#include <stdio.h>
#include <string.h>

int main()
{
 char rev_str[100];
    printf("Enter any String : ");
    scanf("%s",&rev_str);

    printf("Reverse String is : %s", strrev(rev_str));	
}
