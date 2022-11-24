/*Program 2: Write a Program that accepts a String from user and reverse the
string.
Input: hello
Output:
Entered String: hello
Reversed String: olleh
*/


#include <stdio.h>

//str len function
long myStrlen(char *str) {
	int i=0;
	for(i=0; *(str+i) != '\0'; i++);
	return i-1;
}

//str reverse function
char* reverse(char *str) {
	int i=0;
	char ch;
	int len = myStrlen(str);
	for(i=0; i< len/2 ;i++){
		ch = *(str+i);
		*(str+i) = *(str+(len-1-i));
		*(str+(len-1-i)) = ch;
	}
	
	return str;
}

void main() {
	char str[30];
	printf("Enter string: ");
	fgets(str,30,stdin);

	printf("Reverse of the string: %s\n",reverse(str));
}

