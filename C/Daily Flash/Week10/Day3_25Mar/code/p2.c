/*
 * Program 2: Write a Program that accepts a String from user and prints the
length of that string.
Input: HELLO WORLD
Output: Length of entered string is 11
*/


#include <stdio.h>
#include <string.h>

//str len function
long myStrlen(char *str) {
	int i=0;
	for(i=0; *(str+i) != '\0'; i++);
	return i-1;
}

void main() {
	char str[30];
	printf("Enter string: ");
	fgets(str,30,stdin);
	
	printf("Lenght of string: %ld\n",myStrlen(str));
}
