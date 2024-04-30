#include <stdio.h>

int main(){

    int num_1, num_2, num_3;
    printf("Enter First Number : ");
    scanf("%d",&num_1);
    printf("Enter Second Number : ");
    scanf("%d",&num_2);
    printf("Enter Third Number : ");
    scanf("%d",&num_3);
    if(num_1>num_2 && num_1>num_3)
    {
        printf("%d First Number is Largest...",num_1);
    }
    else if(num_2>num_1 && num_2>num_3)
    {
        printf("%d Second Number is Largest...",num_2);
    }
    else
    {
        printf("%d Third Number is Largest...",num_3);
    }	
}


