/*
29.Write a program which sets all characters in string to a specific character (Implement strset()).   

Input : HelloWorld a   
Output : aaaaaaaaaa   
--------------------------------------------------------------------------------------------------------------------------------------
*/

#include <stdio.h>

//prototypes

char* strSet(char * , char);


void main() {
	
		char str[30],replace;
		
		//accept a string
		printf("Enter the string: ");
		scanf("%[^\n]",str);
		
		//accpet the word to be replaced
		printf("Enter the letter for replacement: ");
		scanf(" %c",&replace);
			
		strSet(str,replace);	//str and replace are actual parameter
		printf("\nReplaced string: %s\n",str);
}

//function to set letter
char* strSet(char *str , char replace) {	//formal paratameters
		
		
		while( *str != '\0'){
				if(*str == ' ' || *str=='\t');
				
				else{	
					//change original letter by replace letter
					*str = replace;
				}
				str++;
		}
		return str;
}
