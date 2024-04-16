#include<stdio.h>
#include<string.h>
int struct student{
	int stu_id,stu_age,stu_standard;
	char stu_name[100],stu_course[50],stu_city[100],stu_school[100];

	
}S1[100];
void main(){

	int i;
	for(int i=0;i<3;i++){
		
	printf("Enter id:");
	scanf("%d",&S1[i].stu_id);
	printf("Enter name:");
	scanf("%s",&S1[i].stu_name);
	printf("Enter age:");
	scanf("%d",&S1[i].stu_age);
	printf("Enter course name:");
	scanf("%s",&S1[i].stu_course);
	printf("Enter city name:");
	scanf("%s",&S1[i].stu_city);
	printf("Enter standard:");
	scanf("%d",&S1[i].stu_standard);
	printf("Enter school name :");
	scanf("%s",&S1[i].stu_school);
	}
	for(int i=0;i<3;i++){
		printf("%d %s %d %s %s %d %s",S1[i].stu_id,S1[i].stu_name,S1[i].stu_age,S1[i].stu_course
		,S1[i].stu_city,S1[i].stu_standard,S1[i].stu_school);
	}
}

 
