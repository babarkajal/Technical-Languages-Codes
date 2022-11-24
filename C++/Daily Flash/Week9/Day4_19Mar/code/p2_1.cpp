/*
 * Program 2: Write a Program that accepts a String (i.e. Array of Characters)
from user. In addition, print that String
Input: Hello from Core2Web
Output: Hello from Core2Web
*/

#include <iostream>

int main() {
	std::string str;
	std::cout << "Enter string: ";
	std::cin >> str;
	std::cout << "Output: "<< str << std::endl;
	return 0;
}
