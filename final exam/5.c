#include <stdio.h>
int main() {
	char name[50];
	int course,i,n;
	printf("Enter number of students: ");
	scanf("%d",&n);
	FILE *fptr;
	fptr=(fopen("data.txt","w"));
	if(fptr==NULL) {
		printf("Error!");
		exit(1);
	}
	for (i=0;i<n;++i) {
		printf("For student%d\nEnter name: ",i+1);
		scanf("%s",name);
		printf("Enter course: ");
		scanf("%d",&course);
		fprintf(fptr,"\nName: %s \ncourse=%d \n",name,course);
	}
	fclose(fptr);


}



