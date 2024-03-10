#include <stdio.h>
main(){
    int price,percentage,amount;
    printf("Enter the price of the item:");
    scanf("%d",&price);
    printf("Enter the discount percentage:");
    scanf("%d",&percentage);
    amount=price*percentage/100;

    printf("\nThe amount to be paid is:%d\n",amount);
    }
