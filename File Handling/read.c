#include<stdio.h>
main()
{
	FILE *p;
	char data[100];
	p=fopen ("demo.txt","r");
	 if (p==NULL)
	 {
	 	printf("Can't open file");
	 }
	 else
	 {
	 	printf("open file");
	 }
	 while(fgets(data,50,p)!=NULL)
	 {
	 	printf("%s",data);
	 }
}
