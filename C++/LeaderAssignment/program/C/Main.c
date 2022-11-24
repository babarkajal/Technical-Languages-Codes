#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

#include "mystring.h"
#include "function.h"

//--------------------------------------------------------------------------------------------------------------------------------
int main () {

	int N , year,choice,status,isAccepted;
	char ch;

	//open file to read the name
	FILE *fp = fopen("gohome.txt","w+");
	fprintf(fp,"%s\n","My name is kajal");

	//go the start of file
	fseek(fp,0,0);
	printf("\n---------------------------------------------------------------------------------\n");
       	printf("\t\t\t");
	while((ch =fgetc(fp)) !=EOF) {
		printf("%c", ch);
	}	
	printf("---------------------------------------------------------------------------------\n");
	fclose(fp);

	do {
		printf("\n---------------------------------------------------------------------------------\n");
		printf("\t1. Create Disease list\n");
		printf("\t2. Add Disease at Beginning\n");
		printf("\t3. Display Diseases\n");
		printf("\t4. Delete Disease \n");
		printf("\t5. Exit\n");
		printf("\n\tEnter your choice: ");
		scanf("%d",&choice);

		switch(choice) {
				case 1:
					//test case: N should be positive and should be num
					do {
						printf("\tEnter num of Diseases: ");
						isAccepted = scanf("%d",&N);
						
						while ((getchar()) != '\n');

						if (N < 0  || isAccepted == 0) {
							printf("\n\tNumber of nodes should be positive integer only.Try again\n");
						}

					}while(N<0 || isAccepted == 0 );

						
					//call the createDiseaseList method to create N nodes
					createDiseaseList(N);
					break;
					
				case 2:
					status = addAtFirst();
					if(status == 0) 
						printf("\n\tInserted Successfully :) ");
					else
						printf("\n\t_________ Oops!! Failed :( __________\n");
						
					break;

				case 3:
					display();
					break;
				case 4:
					printf("\tEnter disease discoverd year to delete the record: ");
					scanf("%d",&year);
					status = deleteNode(year);
					//if record deletion is done successfully
					if(status == 0) 
						printf("\n\tRecord deleted Successfully :)\n");
					//if enntered record is not found
					else if(status ==1) 
						printf("\n\tOops!! You are trying to delete the record which is not present in the list :(\n");
					break;

				case 5:
					printf("\t\t***************** THANK YOU ******************\n");
					//call exitLif to free all allocated space
					exitLife();
					exit(0);

				default:
					printf("\tPlease enter Valid option\n");

		}
		//to make buffe empty
		while ((getchar()) != '\n');
	}while(1); 
}
