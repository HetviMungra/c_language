#include<stdio.h>
main()
{
    int f=0,s=1,n,a;
    printf("Enter the number :");
    scanf("%d",&a);
    for(int i=0;i<=a;i++)
    {
        printf("%d\n",f);
        n=f+s;
        f=s;
        s=n;
    }

}