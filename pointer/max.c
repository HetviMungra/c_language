#include<stdio.h>
int max(int *a,int *b){
	if(*a<*b){
		printf("Max %d",*b);
	}
	else{
		printf("Max %d",*a);
	}
}
void main(){
	int a,b;
	printf("Enter your Number a:");
	scanf("%d",&a);
	printf("Enter your Number b:");
	scanf("%d",&b);
	max(&a,&b);
}
