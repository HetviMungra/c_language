#include<stdio.h>
#include<string.h>
 struct student{
	int book_id,book_publication_year,book_price;
	char book_title[100],book_author[50],book_genre[100],book_publisher[100];
	
}S1[100];
void main(){
	int n;
	printf("Enter number Employee:");
	scanf("%d",&n);
	int i;
	for(int i=0;i<n;i++){
		
	printf("Enter id:");
	scanf("%d",&S1[i].book_id);
	printf("Enter name:");
	scanf("%s",&S1[i].book_title);
	printf("Enter age:");
	scanf("%s",&S1[i].book_author);
	printf("Enter your role:");
	scanf("%s",&S1[i].book_genre);
	printf("Enter city name:");
	scanf("%s",&S1[i].book_publisher);
	printf("Enter experience:");
	scanf("%d",&S1[i].book_publication_year);
	printf("Enter company name :");
	scanf("%d",&S1[i].book_price);
	}
	for(int i=0;i<n;i++){
		printf("%d %s %s %s %s %d %d",S1[i].book_id,S1[i].book_title,S1[i].book_author,S1[i].book_genre
		,S1[i].book_publisher,S1[i].book_publication_year,S1[i].book_price);
	}
}

 
