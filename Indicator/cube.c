#include<stdio.h>
int cube(int *n){
	printf("%d",(*n)*(*n)*(*n));	
}
void main(){
	int n;
	printf("Enter number:");
	scanf("%d",&n);
	cube(&n);
}
