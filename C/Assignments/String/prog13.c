/*
---------------------------------------------------------------------------------
13.Write a program to check whether given strings are Anagram strings or not.   
Input : abccd cbcda   
Output : Strings are anagram   
-----------------------------------------------------------------------------------*/

#include <stdio.h>


//calculate the length
int mystrlen(char *str){
	int count = 0;
	while(*str++ != '\0')
		count++;

	return count;
}


//sort the string s
void sortString(char* str) {

		int olc, ilc;
		int len = mystrlen(str);
		char temp;

		for(olc = 0; olc<len ; olc++){
			
			for(ilc = 0 ; ilc < len-1; ilc++){
				if( *(str+ilc) > *(str+ilc+1)){
					
						temp = *(str+ilc);
						*(str+ilc) = *(str+ilc+1);
						*(str+ilc+1) = temp;			
	
				}//end if
			}//end inner for

		}//end for 
}//end function


//funtion to convert lower case 
char* strLwr(char* str){

		while(*str !='\0'){
			if( 'A' <= *str && *str <= 'Z'){
				*str +=32;
			}

			else{
				*str = *str;
			}
			str++;
		}
}//end fun


//func to cmp the strings
int myStrCmp(char* str1 , char* str2){

		while(*str1 != '\0'){
			
			str1++;
			str2++;
		
			//if char not matched then return -1
			if( *str1 != *str2)		
				return -1;		
		
		}
		return 0;

}


//main started
void main() {
		
		
	char str1[30];
	char str2[30];
	
	printf("Enter first the string: ");
	scanf("%[^\n]",str1);

	printf("Enter first the string: ");
	scanf(" %[^\n]",str2);
	
	int len1 = mystrlen(str1);
	int len2 = mystrlen(str2);
	
	if(len1 != len2)
		printf("String length not matched!!!\n");
	else {
		//convert all the string into lower case.easy for sorting
		strLwr(str1);
		strLwr(str2);
		
		//sort the stirngs
		sortString(str1);
		sortString(str2);
		
		//cmp the strings
		int i = myStrCmp(str1,str2);
		
		printf("\n------------------------------------------------------\n");
		if(i == 0)
			printf("Entered strings are Anragram strings\n");
		else
			printf("Entered strings are not Anragram strings\n");
		printf("\n------------------------------------------------------\n");

	}//end else
	
}
