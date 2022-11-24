/*
 * Program 5: Write a program to ASCII values of input character.
Input: A
Output: ASCII Value of A is 65
*
*/

#include <stdio.h>

void main() {
	
	char c;
	printf("Enter one character: ");
	scanf("%c", &c);
	printf("ASCII value of %c : %d\n", c, c);
}
