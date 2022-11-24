/*  
21.Write a program which accept two strings from user and compare two strings without case sensitivity. If both strings are equal then return 0 otherwise return difference between first mismatch character (Implement stricmp()).   

Input : FirStr FIRStR   
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
		else if(diff == -1)
			printf("Strings length is not maatched\n");
		else
			printf("The string is differed by %d (ASCI value)\n",diff);
}

//campare two strings without considering case of string
int myStrCmp(const char* str1, const char* str2) {
		
		//calculate the length
		int len1 = myStrLen(str1);
		int len2 = myStrLen(str2);
		
		//check the length
		if(len1 != len2){
			return -1;
		}
		else{
				
			while( *str1 != '\0'){
				//check for same characters
				if( (*str1 == *str2)||(*str1-*str2==32)||(*str1-*str2==-32)){
	
					str1++;
					str2++;
	}
				else{
					if(*str1 > *str2)
						return (*str1 - *str2);
					else
						return (*str2 - *str1);
				
				}
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
