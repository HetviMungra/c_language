#include <stdio.h>
main(){
    int a,b,c,e,tot;
    printf("Enter the value a:");
    scanf("%d",&a);
    printf("Enter the value b:");
    scanf("%d",&b);
    printf("Enter the value c:");
    scanf("%d",&c);
    printf("Enter the value e:");
    scanf("%d",&e);
    tot=(a+b)*(c-e);
    printf("Arithmetic expression:%d",tot);
}