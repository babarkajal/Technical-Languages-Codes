/*
 *Program 2: Write a Program that accepts a String from user in UPPERCASE.
Print that string in lowercase.
Input: HELLO WORLD
Output: hello world
*
*/

#include <iostream>
#include <string>
#include <algorithm>

int main() {
	std::string str;

	std::cout << "Enter string: ";
	std::cin >> str;

	std::for_each(str.begin(),str.end(),[](char &c) {
		c=::tolower(c);
	});
	std::cout << "In lower case: " << str <<std::endl;
}
