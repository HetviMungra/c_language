#include <stdio.h>
main(){
    int  interest,principal,rate ,time;
    printf("Enter the principal:");
    scanf("%d",&principal);
    printf("Enter the rate:");
    scanf("%d",&rate);
    printf("Enter the time:");
    scanf("%d",&time);
    interest=(principal*rate*time)/100;
    printf("\n Simple interest:%d",interest);
}