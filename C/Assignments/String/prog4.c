/*
4.Write a program which accept sentence from user and print length of that sentence (Implement strlen()).   

Input : India is my   
Output : 11   

---------------------------------------------------------------------------------------------------------------------------------------
*/

#include <stdio.h>

//protoype
int mystrlen(char*);

void main() {
		
		char str[40];
		char* cptr=str;
		
		//accpet the string
		printf("Enter the string: ");
		fgets(str,20,stdin);
		
		//count the len of string
		int length = mystrlen(cptr);
		printf("Length of the string = %d\n",length);
}

//function to calculate the length of string
int mystrlen(char *cptr) {
		
		int len = 0;
		
		while ( *cptr != '\0') {
			len++;
			cptr++;
		}
		return len;
}
		

