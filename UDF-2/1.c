#include<stdio.h>
int array(int arr[],int size){
	int i,sum;
	printf("Enter Array Elements...\n");
	for(i=0;i<=size;i++)
	{
		printf("a[%d] :",i);
		scanf("%d",&arr[i]);
	}
	for(i=0;i<size;i++)
	{
		sum += arr[i];
		
	}
	printf("sum is:");
	return sum;
	
}
void main(){
	int size;
	printf("Enter size:");
	scanf("%d",&size);
	int arr[size];
	printf("%d",array(arr,size));
	
}
