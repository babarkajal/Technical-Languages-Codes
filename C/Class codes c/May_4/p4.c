//Reading a string by using gets() function

#include <stdio.h>

//prototype of gets
char* gets(char*);

void main(){
	
	char str[50];

	printf("enter a stirng: ");
	
	//Accept string 	
	gets(str);

	printf("Entered the string: %s\n",str);
}
