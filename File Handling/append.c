#include<stdio.h>
main()
{
	FILE *p;
	char data[100];
	p=fopen ("demo.txt","a");
	 if (p==NULL)
	 {
	 	printf("Can't open file");
	 }
	 else
	 {
	 	printf("open file");
	 }
	 printf("Enter data:");
	 gets(data);
	 fputs (data,p);
}
