//concatenate  two strings

#include<stdio.h>


//protoype of gets
char* gets(char*);

//prototype of strcat
char* strcmp( char*,const char*);

void main(){
	char str1[20];
	char str2[20];

	puts("Enter string1: ");
	gets(str1);

	puts("Enter string1: ");
	gets(str2);
		
	//concatenate two strings
	strcat(str1,str2);

	puts("concatenated string is: ");
	puts(str1);
}
