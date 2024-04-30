#include <stdio.h>
void main()
{
  int n,sum=0,arr[n],i;
  printf("Enter array size:");
  scanf("%d",&n);
  for( i=0;i<n;i++)
  {
  	printf("a[%d]=",i);
  	scanf("%d",&arr[i]);
  	
  }
  for( i=0;i<n;i++){
  	sum+=arr[i];
  }
  printf("sum %d",sum);
}
