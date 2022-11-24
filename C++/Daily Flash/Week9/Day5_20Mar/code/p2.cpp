/*
 * Program 2: Write a Program that accepts a String from user. Print that string
character by character.
Input: HELLO WORLD
Output: H E L L O W O R L D
*
*/

#include <iostream>
#include <cstring>

int main() {
	char *ch = (char*)malloc(sizeof(char));

	std::cout << "Enter string: ";
	std::cin >> ch;

	std::cout << "Characters from the string: "<<std::endl;
	for(int i=0; i<strlen(ch); i++) {
		std::cout << *(ch+i) << "   ";
	}
	std::cout << std::endl;

}
