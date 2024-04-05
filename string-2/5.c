#include<stdio.h>
main()
{
	char a[100],b[100];
	gets(a);
	gets(b);
	if(strcmp(a,b)==0){
		printf("Strings are equal");
	}
	else{
		printf("No, they are not equal.");
	}
	
}
