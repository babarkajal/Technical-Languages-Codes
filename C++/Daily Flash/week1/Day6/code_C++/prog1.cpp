/*
 * Program 1: Write a program to print First 10 Natural Numbers.
Output: 1 2 3 4 5 6 8 9 10
*
*/

#include <iostream>

int main() {

	std::cout << "First 10 Natural num:" << std::endl;
	for(int i=1 ;i <= 10 ;i++)
		std::cout << i << " ";
	std::cout << std::endl;
	return 0;
}
