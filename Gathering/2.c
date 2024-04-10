#include<stdio.h>
 float calculateArea(float l,float w){
 	return l*w;
 	
 }
 main(){
 	float l,w,area;
 	printf("Enter the length of the rectangle:");
 	scanf("%d\n",&l);
 	printf("Enter the width of the rectangle:");
 	scanf("%d",&w);
 	area=calculateArea(l,w);
 	printf("the area of rectangle %f ",area);
 }
