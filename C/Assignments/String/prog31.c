/*   
31.Write a program which sets last N characters in string to a specific character (Implement strnset()).

Input : HelloWorld a 8   
Output : Heaaaaaaaa
--------------------------------------------------------------------------------------------------------------------------------------
*/

#include <stdio.h>

//prototypes

char* strNSet(char * , char, int);
int myStrLen(const char*);

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
}//main

//function to calculate length
int myStrLen(const char* str) {
		
		int count = 0;
		
		while( *str++ != '\0')
				count++;
		
		return count;
}		



//function to set letter
char* strNSet(char *str , char replace , int n) {	//formal paratameters
		
		//find the length
		int len = myStrLen (str);

		int last = len - n;			//for getting nth last position
		int i = 0;
		
		while( i < n) {
				
				if(*(str + last) == ' ' || *(str + last)=='\t');
					//skip the spaces and tabs
				
				else{	
					//change original letter by replace letter
					*(str + last) = replace;
				}
				i++;
				last++;
				
		}
		return str;
}
