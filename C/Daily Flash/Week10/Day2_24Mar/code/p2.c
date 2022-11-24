/*
 * Program 2: Write a Program that accepts a String from user in UPPERCASE.
Print that string in lowercase.
Input: HELLO WORLD
Output: hello world
*
*/

#include <stdio.h>
//----------------------------- string lower fun ----------------------------
char* lower(char* str) {
	for(int i=0; *(str+i) !='\0'; i++) {
		if(*(str+i) >=65 && *(str+i) <=90)
			*(str+i) = *(str+i) + 32;
		else
		       continue;	

	}
	return str;

}

void main() {
	
	char str[30];
	printf("Enter string: ");
	fgets(str,30,stdin);
	printf("The Lower case string: %s\n", lower(str));
}
