//copy  string from source to the destination 

#include<stdio.h>
#include<string.h>
//protoype of gets
char* gets(char*);

void main(){
	char str1[20];
	char str2[20];

	puts("Enter string1(source): ");
	gets(str1);

		
	//copy string
	strcpy(str2,str1);
	puts("Copied string str2 is: ");
	puts(str2);
}
