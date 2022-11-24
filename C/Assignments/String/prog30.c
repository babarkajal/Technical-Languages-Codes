/*   
30.Write a program which sets first N characters in string to a specific character (Implement strnset()).

Input : HelloWorld a 8   
Output : aaaaaaaald 
--------------------------------------------------------------------------------------------------------------------------------------
*/

#include <stdio.h>

//prototypes

char* strNSet(char * , char, int);


void main() {
	
		char str[30],replace;
		int n;
		
		//accept a string
		printf("Enter the string: ");
		scanf("%[^\n]",str);
		
		//accpet the word to be replaced
		printf("Enter the letter for replacement: ");
		scanf(" %c",&replace);
			
		//accpet number of char to be replaced
		printf("Enter number of characters to be replaced: ");
		scanf("%d",&n);
		
		//fun call	
		strNSet(str, replace , n);	//str and replace are actual parameter
		printf("\nReplaced string: %s\n",str);
}

//function to set letter
char* strNSet(char *str , char replace , int n) {	//formal paratameters
		
		int i = 0;
		while(i++ < n){
				if(*str == ' ' || *str=='\t');
				
				else{	
					//change original letter by replace letter
					*str = replace;
				}
				str++;
		}
		return str;
}
