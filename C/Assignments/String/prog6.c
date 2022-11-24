/* 
Write a program which accept sentence from user and print number of words from that sentence.   

Input : In my company   Output : 3
---------------------------------------------------------------------------------------------------------------------------------------
*/

#include <stdio.h>

void main() {
	
		char str[30];
		char* cptr=str;
		int count=0;
		
		//accpet string
		printf("Enter the string: ");
		fgets(str, 20 ,stdin);
		
		while( *cptr != '\0'){
				
			if(*cptr == ' ' || *cptr == '\n' || *cptr =='\t' )
				count++;

			cptr++;
		}
		printf("\nNumber of words: %d\n",count);
}

