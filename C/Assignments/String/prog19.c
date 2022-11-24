/*
19.Write a program which accept two strings from user and compare two strings. If both strings are equal then return 0 otherwise return difference between first mismatch character (Implement strcmp()).Input : FirStr FirStr  
Output : Both strings are equal.   
----------------------------------------------------------------------
*/

#include <stdio.h>

//comapre two strings
int myStrCmp(const char* ,const char*);

//len fun
int myStrLen(const char*);

void main() {
	
		char str1[20];	
		char str2[20];	
		
		//accept two strings
		printf("Enter first strings: ");
		scanf("%[^\n]",str1);
		
		printf("Enter second strings: ");
		scanf(" %[^\n]",str2);
			
		int diff = myStrCmp(str1,str2);
		if(diff == 0)
			printf("Strings are same\n");
		else
			printf("The string is differed by %d (ASCI value)\n",diff);
}

int myStrCmp(const char* str1, const char* str2) {
		
		//calculate the length
		int len1 = myStrLen(str1);
		int len2 = myStrLen(str2);
		
		//check the length
		if(len1 != len2)
			printf("length  is not same\n\n");
		
		else{
			
			while( *str1 != '\0'){
				
				if( *str1 > *str2) 
					return *str1 - *str2;	//return their diff  
				
				else if(*str1 < *str2)
					return *str2 - *str1;
				
				else
					str1++;
					str2++;
			}
		}
		return 0;
}

//to calculate the length

int myStrLen(const char* str) {
		
		int count = 0;
		while( *str != '\0') {	
				count++;
				str++;
		}
		return count;
}
