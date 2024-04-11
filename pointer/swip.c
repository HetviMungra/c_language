#include<stdio.h>
swap(int *n,int *m)
{
	int *temp;
	temp=*n;
	*n=*m;
	*m=temp;
	printf("a=%d\nb=%d",*n,*m);
	
}
void main(){
	int a,b;
	printf("Enter your Number a:");
	scanf("%d",&a);
	printf("Enter your Number b:");
	scanf("%d",&b);

	swap(&a,&b);
}
