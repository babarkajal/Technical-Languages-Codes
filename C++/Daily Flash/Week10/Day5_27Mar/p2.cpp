/*
 * Program 2: Write a Program that accepts a String from user and replaces every
vowel from that String with next alphabet.
Input: hello
Output: Replaced String: hfllp
*
*/

#include <iostream>

//----------------------- replace function --------------------
char* replace(char* str) {

	char ch;
	for(int i=0; *(str+i)!='\0'; i++) {
		ch =*(str+i);

		//if vowel found then replace it with next char
		if(ch=='a'|| ch=='e' || ch == 'i' || ch=='o' || ch=='u') 
			*(str+i) = ch+1;
		
		if(ch=='A'|| ch=='E' || ch == 'I' || ch=='O' || ch=='U') 
			*(str+i) = ch+1;

	}
	return str;
}

//------------------------------------------------------------------

int main() {
	char str[40];
	std::cout << "Enter string: ";
	fgets(str,30,stdin);
	std::cout << "Replaced string: " <<replace(str) << std::endl;
}
