/*
12.Write a program which toggles the case of a string.   

Input : DevIce DriVer   
Output : dEViCE dRIvER   
---------------------------------------------------------------------------------------------------------------------------------------*/

#include <stdio.h>

char* myStrToggle(char *str) {
	
		while( *str != '\0'){
			
			if ( *str >='a' && *str <= 'z'){		//change lower to upper by sub 32 into it
			
				*str = *str - 32;
			}
			else if ( *str >='A' && *str <= 'Z'){		//change upper to lower by adding 32 into it
			
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
		
		//call function
		myStrToggle(str);
		
		printf("\nToGgLe case of entered string: ");
		printf("%s\n",str);
}
