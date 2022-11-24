//structure within structure

#include<stdio.h>

struct name{
	char first_name[30];
	char last_name[30];
};

struct phone_entry{
	struct name person;
	char mobile_no[15];
};


void main(){
	struct phone_entry p1,p2;
	
	//data of 1st person
	printf("\nEnter the details of the first person: \n");

	printf("\nEnter first name: ");
	gets(p1.person.first_name);
	printf("enter last name: ");
	gets(p1.person.last_name);
	printf("enter mobile number: ");
	gets(p1.mobile_no);

	//data of second person	
	printf("\nEnter the entry of second person: \n");
	
	printf("\nEnter the first name: ");
	gets(p2.person.first_name);
	printf("enter last name: ");
	gets(p2.person.last_name);
	printf("enter mobile number: ");
	gets(p2.mobile_no);

	printf("\n---Record of phonebook---\n");
	printf("%s %s: %s\n",p1.person.first_name, p1.person.last_name, p1.mobile_no);
	printf("%s %s: %s\n",p2.person.first_name, p2.person.last_name, p2.mobile_no);
}
