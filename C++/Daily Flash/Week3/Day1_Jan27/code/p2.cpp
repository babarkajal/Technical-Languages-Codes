/*
 * Program 2: Write a Program that accepts Two integers from user and prints
minimum number from them.
Input: 56 99
Output: The Minimum number amongst 56 & 99 is 56
*/
#include <iostream>

int main() {
	int num1,num2;
	std::cout << "Enter num1: ";
	std::cin >> num1;

	std::cout << "Enter num2: ";
	std::cin >> num2;

	std::cout << (num1 < num2 ? num1 : num2);
	std::cout << "is the minimum among " << num1 << " and " << num2;
        std::cout << std::endl;
        return 0;

}
