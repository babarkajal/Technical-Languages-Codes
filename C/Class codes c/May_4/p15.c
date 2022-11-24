//compare  two string ignoring the case 

#include<stdio.h>


//protoype of gets
char* gets(char*);


//prototype of strcasecmp
char* strcmp(const char*,const char*);

void main(){
	char str1[20];
	char str2[20];

	puts("Enter string1: ");
	gets(str1);

	puts("Enter string1: ");
	gets(str2);
		
	//compare strings
	int i= strcasecmp(str1,str2);
	
	if(i==0)
		printf("Strings are equal\n\n");
	else
		printf("Strings are not equal\n\n");
}
