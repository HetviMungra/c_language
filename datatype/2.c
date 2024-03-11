#include<stdio.h>
main(){
    float r,c,pi;
    printf("Enter the value of radius and circumference: ");
    scanf("%f%f",&r,&c);
    pi=3.14159;
    c=(2*pi)*r;
    printf("\nThe Circumference is = %f",c);
}