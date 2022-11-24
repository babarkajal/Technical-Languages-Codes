/*
--------------------------------------------------------------------------------------------------------------------------------------
Program 7: Write a program in C to ask basic info of the user (Name , Age ,Gender ,School ) and store the info into the file in a proper format .
--------------------------------------------------------------------------------------------------------------------------------------
*/
#include <stdio.h>

void main(){
	int n;	
	FILE *fp=fopen("prog7_Record.txt","a");
	
	//varible to take data
	char *name;
	int age;
	char Gender;
	char *schoolName;

	printf("Enter the number of entries: \n");
	scanf("%d",&n);

	for(int i=0;i<n; i++){
		
		printf("\n----------Enter the details of student %d---------\n",i+1);
		printf("Enter the name of student: ");
		scanf("%s",name);
		printf("Enter age: ");
		scanf("%d",&age);
	
		printf("Enter Gender: ");
		scanf(" %c",&Gender);
	
		printf("Enter schoolName: ");
		scanf("%s",schoolName);
	
//		print
//		printf("%s\t%d\t%c\t%s\n",name,age,Gender,schoolName);
	
		//write into a file
		fprintf(fp,"%s \t %d \t %c \t  %s\n",name,age,Gender,schoolName);
		printf("\nRecord of student %d is created \n",i+1);
	}
}

	
