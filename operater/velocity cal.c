#include <stdio.h>
main(){
    int velocity , time ,distance;
    
     printf("Enter the distance:");
    scanf("%d",&distance);
    printf("Enter the time:");
    scanf("%d",&time);
    velocity=distance/time;
    printf("The velocity:%d",velocity);
}