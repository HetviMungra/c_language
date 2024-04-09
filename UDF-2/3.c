//RECURSIN
#include<stdio.h>
fact(int n){
	if(n<=1){
		return 1;
		
	}
	else{
		return n*fact(n-1);
		
	}
}
main(){
	int n;
	printf("Enter value:");
	scanf("%d",&n);
	printf(" ans:%d",fact(n));
	
}
