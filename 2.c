#include<stdio.h>
main()
{
    int weight;
    float height,BMI;
    printf("Enter weight:");
    scanf("%d",&weight);
    printf("Enter height:");
    scanf("%f",&height);
    BMI = weight/(height*height);
    printf("Body Mass Index:%f",BMI);
 }