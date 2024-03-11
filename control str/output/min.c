#include <stdio.h>
int main(){
    int a,b;
    printf("enter a first number:");
    scanf(" %d",&a);
    printf("enter a second number:");
    scanf( " %d", &b);
    if (a<b){
        printf("the numbers are minimum:%d\n",a);
    }
    else{
        printf("the numbers are  minimum:%d\n",b);
    }
}