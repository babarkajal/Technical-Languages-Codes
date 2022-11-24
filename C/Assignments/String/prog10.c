/*
10.Write a program to convert the string from upper case to lower case (Implement strlwr()).   
Input : DevIce DriVer   
Output : device driver
---------------------------------------------------------------------------------------------------------------------------------------*/

#include <stdio.h>

char* mystrlwr(char *str) {
	
		while( *str != '\0'){
			
			if ( *str >='A' && *str <= 'Z'){		//change upper to lower by adding 32 into it
				*str = *str + 32;
			}
			str++;					//inc the str pointer
			
		}
		return str;

}

void main() {
		char str[30];					//to store the string
			
		
		printf("Enter the string: ");	
		scanf("%[^\n]",str);				//take p upto \n
		
		mystrlwr(str);
		
		printf("Lower case of entered string: ");
		printf("%s\n",str);
}
