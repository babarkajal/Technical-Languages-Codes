/*Program 2: Write a Program that accepts a String from user and reverse the
string.
Input: hello
Output:
Entered String: hello
Reversed String: olleh
*/

#include <iostream>


int main() {
	std::string str;
	std::cout << "Enter string: ";
	std::cin >> str;
	std::cout << "Reverse of the string: " << str.reverse() << std::endl;
	return 0;
}
