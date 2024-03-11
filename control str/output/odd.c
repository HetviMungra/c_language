#include <stdint.h>
main(){
    int a;
    printf("Enter your value:");
    scanf(" %d",&a);
    if(a%2==0)
    {
        printf("%d is even number.",a);
    }
    else  
    { 
        printf("%d is odd number.",a);
    }
}