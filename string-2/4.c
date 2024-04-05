#include<stdio.h>
main()
{
char fullname[100];
	char firstname[100];
	char lastname[100];
	printf("Enter your firstname:");
	gets(firstname);
	printf("Enter your lastname:");
	
	gets(lastname);
	strcpy(fullname,strcat(firstname,lastname));
	puts(fullname);
	
}
