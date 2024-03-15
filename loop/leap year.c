#include <stdio.h>
main(){
 int a,b;
 printf("Enter the first number:");
 scanf("%d",&a);
 printf("\nEnter the second number:");
 scanf("%d",&b);
 while (a<=b)
 {
    
    if (a%4==0)
    {
        printf("%d\n",a); 
    }
    a++;
 }
 

}