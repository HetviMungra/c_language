#include<stdio.h>
int swap(int *n,int *m,int *o)
{
	int *temp;
	temp=*n;
	*n=*m;
	*m=*o;
	*o=temp;
	printf("a=%d\nb=%d\nc=%d",*n,*m,*o);
	
}
void main(){
	int a,b,c;
	printf("Enter your Number a:");
	scanf("%d",&a);
	printf("Enter your Number b:");
	scanf("%d",&b);
    printf("Enter your Number c:");
	scanf("%d",&c);
	swap(&a,&b,&c);
}
