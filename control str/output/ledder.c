#include <stdio.h>
main(){
    int a;
    printf("Enter the number:");
    scanf("%d",&a);
    if(a>0)
    {
        printf("Positive: %d\n",a);
    }
    else if (a<0)
    {
        printf("Negative:%d\n",a);
    }
    else  
    {
        printf("Neutral...\n");  
    }
}