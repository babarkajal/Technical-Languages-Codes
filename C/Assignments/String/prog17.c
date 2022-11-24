/*
17.Write a program which accept two strings from user and append second string after first string(Implement strcat()).   

Input : FirStr SecStr   Output : FirStrSecStr 
------------------------------------------------------------------------------------------------------------------------------------------------------------------------
*/

# include <stdio.h>

//concatenate string fun 
char* mystrcat (char*,const char* ) ;


void main() {
	
		char str1[20];
		char str2[20];
		
		//accpet firststring
		printf("Enter first string: ");
		scanf("%[^\n]",str1);

		//accpet second string
		printf("Enter first string: ");
		scanf(" %[^\n]",str2);
		
		
		mystrcat(str1,str2);
		printf("\nconcatenated = %s\n",str1);
	
}

char* mystrcat(char* str1,const char* str2) {
		
		//travel upto end of first string
		while(*str1 != '\0')
				str1++;
		
		//append the second string to first
		while(*str2 != '\0'){

				*str1 = *str2;
				str1++;
				str2++;
		}
		*str1 = '\0';
}
