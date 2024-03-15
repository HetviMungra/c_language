#include <stdio.h>
int main(){
    int a=1,b;
    printf("Enter eny number:");
    scanf(" %d",&b);
    while (b>=a)
    {
        if (b%2!=0)
        {
            printf("%d\n",b);
        }
        b--;
    }
      
}
 