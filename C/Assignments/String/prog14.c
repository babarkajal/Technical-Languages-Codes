/*
14.Write a program which accept string from user and copy that string into some
 another string (Implement strcpy()). 
 
*/

#include <stdio.h>

//prototype of copy fun
char* mystrcpy( char * ,const char*);

void main() {
	
	char src[20];
	char dest[20];
	
	//accpet string upto \n
	printf("Enter the string to be copied: ");
	scanf("%[^\n]",src);
	
	//call the copy function
	mystrcpy(dest , src);
	printf("\nCopied string : %s\n",dest);	
}

char* mystrcpy(char * dest , const char * src) {

	while( *src != '\0'){
		
		*dest = *src;
		dest++;
		src++;
	}
	*dest= '\0';
	return dest;	
}

