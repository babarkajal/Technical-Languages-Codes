/*
 *
 Program 3: Ask user to enter age, sex ( M or F ), marital status ( Y or N ) and
then using following rules print their place of service.
if employee is female, then she will work only in urban areas.
if employee is a male and age is in between 20 to 40 then he may work
in anywhere
if employee is male and age is in between 40 t0 60 then he will work in
urban areas only.
And any other input of age should print "ERROR".
*
*/

#include <stdio.h>

void main() {
	
	int age;
	char sex;
	char status;

	//take data
	//
	//take age 
	//Test case:- check age is < 0
	do {
		printf("Enter the age: ");
		scanf("%d",&age);

		//TEST CASE
		if(age < 0 || age > 60)  {
			printf("ERROR\n");
			exit(0);
		}
	}while(age < 0 || age > 60);


	//check sex is F or M or anything else
	do { 
		scanf("%*c");			//to skip the ln
		printf("Enter Sex(F/M): ");
		scanf("%c",&sex);
	
		//TEST CASE
		if( (sex !='M' && sex != 'm') && (sex != 'F' && sex != 'f') ){
			printf("Invalid Sex!!! Enter Only F/M\n");
		}
	}while( (sex !='M' && sex != 'm') && (sex != 'F' && sex != 'f') );


	//	take marital status
	do {
		scanf("%*c");			//to skip the ln
		printf("Enetr the Marital status(Y/N): ");
		scanf("%c", &status);

		//TEST CASE
		if(status != 'y' && status != 'Y' && status != 'N' && status != 'n') 
			printf("Invalid input!!! Enter Only Y/N\n");

	}while(status != 'y' && status != 'Y' && status != 'N' && status != 'n' );


	//conditions	 
	if(sex == 'F' || sex =='f') 
		printf("You can work only in urban areas\n");
	else if(sex == 'M' && age >= 20 && age <= 40)
		printf("You can work in anywhere\n");

	else if(sex == 'M' && age > 40 && age <= 60) 
		printf("You can work only in urban areas\n");
	
	else 
		printf("ERROR!!!\n");

}
