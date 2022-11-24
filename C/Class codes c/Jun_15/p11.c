//array od structure

#include<stdio.h>

struct stud{
	char name[20];
	int rollNo;
	
};

void main(){
		struct stud record[3];
	
		//accept from user
		for(int i=0;i<3;i++){
			printf("Enter the record of student[%d]\n",i+1);
			printf("\nEnter the name: ");
			scanf("%s",&record[i].name);
			printf("\nEnter roll no: ");
			scanf("%d",&record[i].rollNo);
		}	

		printf("Name\t\tRollNo\n");
	
		for(int i=0;i<3;i++)
		printf("%s\t\t%d\n",record[i].name,record[i].rollNo);
	
}
