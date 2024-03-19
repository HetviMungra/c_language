#include<stdio.h>
main(){
    int n,sum;
    printf("Enter any number: ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
      sum+=i;

    }
    printf("%d\n",sum);
}