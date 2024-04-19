#include<stdio.h>
main()
{
	FILE *p;
	char data[100];
	p=fopen ("demo.txt","w");
	 if (p==NULL)
	 {
	 	printf("Can't open file");
	 }
	 else
	 {
	 	printf("open file");
	 }
	 fputs ("new meesage",p);
}
