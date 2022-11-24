/*
5.Write a program which accept sentence from user and print number of white spaces from that sentence.   

Input : In my company  
Output : 2   
---------------------------------------------------------------------------------------------------------------------------------------
*/

#include <stdio.h>

//protoype
int countSpace(char*);

void main() {
		
		char str[40];
		char* cptr=str;
		
		//accpet the string
		printf("Enter the string: ");
		fgets(str,20,stdin);
		
		//count the spaces
		int space = countSpace(cptr);
		printf("Spaces in the string = %d\n",space);
}

//function to calculate the space in the  string
int countSpace(char *cptr) {
		
		int space = 0;
		
		while ( *cptr != '\0') {
			if( *cptr ==' ')
				space ++;
			cptr++;
		}
		return space;
}
		

