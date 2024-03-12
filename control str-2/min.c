#include <stdio.h>
main()
{
    int a,b,c;
    printf("Enter the  value of a: ");
    scanf("%d",&a);
    printf("Enter the  value of b: ");
    scanf("%d",&b);
    printf("Enter the  value of c: ");
    scanf("%d",&c);
    
    if (a<b)
    {
        if (a<c)
        {
            printf("a is minimum value:%d",a);
        }
        else{
            printf("c is minimum value:%d",c);
        }
       
    }
    else{
       if (b<c)
       {
          printf("b is minimum value:%d",b);
       }
       else{
          printf("c is minimum value:%d",c);
       }
       
    }
}