#include <stdio.h>
main ()
{
    int a,b,c,d;
     printf("Enter the  value of a: ");
    scanf("%d",&a);
    printf("Enter the  value of b: ");
    scanf("%d",&b);
    printf("Enter the  value of c: ");
    scanf("%d",&c);
    printf("Enter the  value of d: ");
    scanf("%d",&d);
    if (a>b)
    {
        if(a>c)
        {
            if(a>d){
                    printf("A is max: %d\n",a);
                   }
            else{
                printf("D is max: %d\n",d);
                }
            }
        else{
                if(c>d)
                {
                    printf("c is max: %d",c);
                }
                else
                {   
                    printf("D is max: %d",d);
                }
                
        }
    }
    else
    {
        if (b>c)
        {
            if (b>d)
            {
                 printf("B is max: %d",b);
            }
            else{
                 printf("D is max: %d",d);
            }
        }
        else
        {
            if(c>d)
            {
                 printf("C is max: %d",c);
            }
            else
            {
                 printf("D is max: %d",d);
            }
        }
        
    }
}