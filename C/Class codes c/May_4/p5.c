//Reading a string by using fgets() function

#include <stdio.h>

//prototype of fgets
// char* fgets(char*,int* ,File*);

void main(){
	
	char str[50];

	printf("enter a stirng: ");
	
	//Accept string using fgets	
	fgets(str,10,stdin);

	printf("Entered the string: %s\n",str);
}
