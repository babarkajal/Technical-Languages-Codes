/* 
3.Write a program which accept sentence from user and print number of small letters, capital letters and digits from that sentence.   

Input : abcDE 5Glm1 O
Output : Small:5 Capital: 4 Digits: 2   

---------------------------------------------------------------------------------------------------------------------------------------
*/
#include <stdio.h>

void main() {
	
		char str[40];
		char* sptr=str;
		//for counting number ,capital and small letters
		int capCount=0,smallCount=0,numCount=0;

		//accpet the string
		printf("Enter the string: ");
		fgets(str,30,stdin);
		
		while( *sptr != '\0'){
				if( *sptr >='a' && *sptr <= 'z' )
					smallCount++;
				
				else if( *sptr >='A' && *sptr <= 'Z' )
					capCount++;
			
				else if ( *sptr >='0' && *sptr <= '9' )
					numCount++;
				else;
				
				//inc pointer
				sptr++;
		
		}
		printf("Count of capital letter = %d\n",capCount);
		printf("Count of small = %d\n",smallCount);
		printf("Count of number = %d\n",numCount);
}
		
		
		
