#include<stdio.h>

divideNumbers(int a,int b){
	printf("Enter your number a:");
	scanf("%d",&a);
	printf("Enter your number b:");
	scanf("%d",&b);
	int  quotient,remider;
	quotient=a/b;
	remider=a%b;
	printf("remider:%d",remider);
	if(remider==0){
		printf("quotient:%d",quotient);
	}

}
void main()
{
	int a1,b1;
	divideNumbers(a1,b1 );
}
