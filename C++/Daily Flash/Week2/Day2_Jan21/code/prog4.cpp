/*
* Program 4: Write a Program that accepts an integer from user and print table
of that number.
Input: 4
Output: 4 8 12 16 20 24 28 36 40
*/

#include <iostream>

int main() {
	int num;
	std::cout <<"Enter input: ";
	std::cin >> num;

	std::cout << "Table of " << num << std::endl;

	for (int i = 1; i<=10 ;i++) 
		std::cout << i*num << "  ";
	std::cout << std::endl;
	return 0;
}
