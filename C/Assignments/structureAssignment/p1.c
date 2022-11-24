#include <stdio.h>

struct student{
		char name[30];
		int id;
		char subject[5][10];
		int marks[5];
		char grade;
};


void main(){
	struct student stud[1];
//	stud.subject[5]={"ADS","MP","CG","M3","PPL"};
	
	for(int i=0 ;i<5 ;i++){
			printf("\nEnter the details for student %d: \n",i+1);
			printf("Enter name: ");
			scanf("%s",stud[i].name);

			printf("Enter id: ");
			scanf("%d",&stud[i].id);
			
			//stud[i].subject[5]={"ADS","MP","CG","M3","PPL"};
			printf("Enter subject details: \n");
			for(int j=0 ;j<5 ;j++){
					printf("subject %d: ",j+1);
					scanf("%s",stud[i].subject[j]);
					
					printf(" marks: ");
					scanf("%d",&stud[i].marks[j]);
			}
			
			printf("Enter grade: ");
			scanf(" %c",&stud[i].grade);
	}
		
	//print data
		for(int i=0 ;i<5 ;i++){
				printf("\n\tDetails of student %d\t\n",i+1);
				printf("Name: %s\n",stud[i].name);
				printf("Id: %d\n",stud[i].id);
				printf("Subject details:\n");
				printf("Subject name\t\tmarks\n");
				for(int j=0 ;j<5 ;j++){
					printf("%s\t\t\t%d\n",stud[i].subject[j],stud[i].marks[j]);
				}
				printf("Grade = %c\n",stud[i].grade);
		}
}
