/*
28.Write a program which accept string from user and check whether string is palindrome or not.   



Input : level    
Output : String is palindrome.   

-------------------------------------------------------------------------------------------------
*/

#include <stdio.h>

//prototype
int palindrome(char *);

void main() {
		
		char str[30];
		
		//accept a string
		printf("Enter the string: ");
		scanf("%[^\n]",str);
		
		int i = palindrome(str);
		if(i == 0)
			printf("String is Palindrome \n\n");
		else
			printf("String is not Palindrome \n\n");
}

//function to calculate length
int myStrLen(const char* str){
		
		int count = 0;
		while( *str++ != '\0')
			count++;
		
		return count;
}


//function for palindrome
int palindrome(char* str) {
		
		int len = myStrLen(str);
		int i = 0;

		while(i < len/2 ){
			if( *(str+i) >='A'&& *(str+i)<='Z')
				*(str + i) +=32;
				
			if( *(str+len-i-1) >='A'&& *(str+len-i-1)<='Z')
				*(str + len-i-1) +=32;
			if( *(str + i) != *(str + len - i -1))
				return -1;
			i++;
		}
		return 0;
}
