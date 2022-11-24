/*
11.Write a program to convert the string from lower case to upper case (Implement strupr()).   

Input : DevIce DriVer   
Output : DEVICE DRIVER  
---------------------------------------------------------------------------------------------------------------------------------------*/

#include <stdio.h>

char* myStrUpr(char *str) {
	
		while( *str != '\0'){
			
			if ( *str >='a' && *str <= 'z'){		//change upper to lower by adding 32 into it
				*str = *str - 32;
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
		myStrUpr(str);
		
		printf("Upper case of entered string: ");
		printf("%s\n",str);
}
