/*
 * Program 3 : Write a Program that accepts a n inte ger from user and prints
whether that number is odd or even .
Input: 2
Output: 2 is an Even Number
*
*/

#include <iostream>

int main() {
	int num;
	std::cout << "Enter num: " ;
	std::cin >> num;

	if(num%2 == 0)
		std::cout << num <<" is an Even number" << std::endl;
	else
		std::cout << num <<" is an Odd number" << std::endl;
	return 0;
}
