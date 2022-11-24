//Set the string

#include<stdio.h>
char* strSet(char*,char ch);

void main(){
	char str[20],ch;
	printf("Enter the string: ");
	gets(str);
	printf("Enter the characterr to set: ");
	scanf(" %c",&ch);

	strSet(str,ch);
	printf("New stirng: %s\n\n",str);
}

char* strSet(char *str,char ch){
		
		while( *str !='\0'){
			*str=ch;
			str++;
		}
	return str;
}
