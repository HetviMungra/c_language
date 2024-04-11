#include<stdio.h>
int max(int *a,int *b){
	if(*a<*b){
		printf("Min %d",*a);
	}
	else{
		printf("Min %d",*b);
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
