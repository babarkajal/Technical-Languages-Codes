//Reading a string by using fgets() function


#include <stdio.h>

//prototype of fgets and fputs

// char* fgets(char*,int* ,File*);
//char* fputs(char* ,File*);

void main(){
	
	char str[50];

	printf("enter a stirng: ");
	
	//Accept string using fgets	
	fgets(str,10,stdin);
	
	printf("\nBy using fputs function\n ");
	printf("Entered the string: ");
	
	//use for print
	fputs(str,stdout);

}
