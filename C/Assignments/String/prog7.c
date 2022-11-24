/* 
write a program which accept sentence from user and print number of words of even and odd length from that sentence.   

Input : In my company   
Output : Even: 2 Odd:1
 -------------------------------------------------------------------------------------------------------------------------------------
*/

#include <stdio.h>

void main() {
	
		char str[30];
		char* cptr=str;
		int evenCount=0 ,oddCount=0,count = 0;
		
		//accpet string
		printf("Enter the string: ");
		fgets(str, 20 ,stdin);
		
		while( *cptr != '\0'){
			
			count++;
			if(*cptr == ' ' || *cptr =='\n'){
				if(count%2 != 0)
					evenCount++;
				else			
					oddCount++;
				count = 0;
			}
			
			cptr++;
		}
		printf("\nNumber of words of length even: %d\n",evenCount);
		printf("\nNumber of words of length odd: %d\n",oddCount);
}

