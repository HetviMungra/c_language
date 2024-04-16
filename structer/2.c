#include<stdio.h>
#include<string.h>
 struct student{
	int emp_id,emp_age,emp_experience;
	char emp_name[100],emp_role[50],emp_city[100],emp_company_name[100];

	
}S1[100];
void main(){
	int n;
	printf("Enter number Employee:");
	scanf("%d",&n);
	int i;
	for(int i=0;i<n;i++){
		
	printf("Enter id:");
	scanf("%d",&S1[i].emp_id);
	printf("Enter name:");
	scanf("%s",&S1[i].emp_name);
	printf("Enter age:");
	scanf("%d",&S1[i].emp_age);
	printf("Enter your role:");
	scanf("%s",&S1[i].emp_role);
	printf("Enter city name:");
	scanf("%s",&S1[i].emp_city);
	printf("Enter experience:");
	scanf("%d",&S1[i].emp_experience);
	printf("Enter company name :");
	scanf("%s",&S1[i].emp_company_name);
	}
	for(int i=0;i<n;i++){
		printf("%d %s %d %s %s %d %s",S1[i].emp_id,S1[i].emp_name,S1[i].emp_age,S1[i].emp_role
		,S1[i].emp_city,S1[i].emp_experience,S1[i].emp_company_name);
	}
}

 
