//copy  some characters of string from source to the destination 

#include<stdio.h>

//protoype of gets
char* gets(char*);

//prototye of strncopy
char* strncopy(char*,const char*,int);

void main(){
	char str1[20];
	char str2[20];
	int n;

	puts("Enter string1(source): ");
	gets(str1);

	puts("Enter number of characters: ");
	scanf("%d",&n);
		
	//copy string
	strncpy(str2,str1,n);

	*(str2 + n )='\0';

	puts("Copied string str2 is: ");
	puts(str2);
}
