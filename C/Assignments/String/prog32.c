/*
32.Write a program which accept string from user and search first occurrence of specific character in string and return the position at which character is found (Implement strchr())
Input : India is my country.  M 
Output : Character m is found at position 10  
--------------------------------------------------------------------------------------------------------------------------------------
*/

#include <stdio.h>

//prototype
int strSearch(char*, char );

void main() {
		
		char str[30],letter;
		
		printf("----------------------------------------------------------------------------------------------------\n");
		//accpet the string
		printf("Enter the string: ");
		scanf("%[^\n]",str);
			
		//accept characters which is to be find
		printf("Enter the letter for searching: ");
		scanf(" %c",&letter);
		
		//fun call
		int pos = strSearch(str , letter);

		if(pos == -1)	
			printf("\nEntered letter is not present in the string\n");
		else
			printf("\nEntered letter is present in the string at pos %d\n",pos);
		
		printf("----------------------------------------------------------------------------------------------------\n");
		
}

//function to search	
int strSearch( char *str , char letter) {
		
		int pos = 1;
		
		//travel upto end of string
		while (*str != '\0') {
				
			if(*str == letter || *str == letter + 32 || *str == letter - 32)
				return pos;
			
			pos ++;
			str++;
		}
		return -1;

}			
	

 

