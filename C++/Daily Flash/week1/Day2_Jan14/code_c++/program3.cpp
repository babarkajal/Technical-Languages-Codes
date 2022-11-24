/*
Program 3: Write a Program to Find whether the character is an alphabet, a
digit or a special character
Input: *
Output: * is a Special Character.
*/



#include <iostream>

int main() {
	char ch;
	std::cout << "Enter character: ";
	std::cin >> ch;
	
	if ((ch >=32 && ch <= 47) || (ch >=58 && ch <= 64 ) || (ch >= 91 && ch <= 96) || (ch >=123 && ch <=126))
		std::cout << ch <<" is a special character" << std::endl;
	else
		std::cout << ch <<" is not a special character" << std::endl;
	return 0;	
}
