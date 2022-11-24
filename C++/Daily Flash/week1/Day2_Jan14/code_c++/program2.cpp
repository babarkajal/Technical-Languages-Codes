/*
Program 2: Write a Program to check whether the Character is Vowel or
Consonant.
Input: E
Output: E is a Vowel.

*/
#include <iostream>

int main() {
	char ch;
	std::cout << "Enter character: ";
	std::cin >> ch;
	
	if (ch == 'a' || ch == 'i' || ch=='e' || ch== 'o' || ch == 'u' || ch == 'A' ||ch == 'E' || ch == 'I' || ch == 'O'||ch=='U' ) 
		std::cout << ch <<" is a vowel" << std::endl;
	else
		std::cout << ch <<" is consonant" << std::endl;
	return 0;	
}
