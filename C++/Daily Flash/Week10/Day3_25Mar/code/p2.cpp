/*Program 2: Write a Program that accepts a String from user and prints the
length of that string.
Input: HELLO WORLD
Output: Length of entered string is 11
*/


#include <iostream>


int main() {
	std::string str;
	std::cout << "Enter string: ";
	std::cin >> str;
	std::cout << "Lenght of the string: " << str.length() << std::endl;
	return 0;
}
