/*
 * Program 5: Write a Program that accepts Three integers from user and prints
maximum number from them.
Input: 56 7 99
Output: The Maximum number amongst 56 7 & 99 is 99
*/


#include <iostream>

int main() {
	int num1, num2, num3;
	std::cout << "Enter num1: ";
	std::cin >> num1;
	
	std::cout << "Enter num2: ";
	std::cin >> num2;
	
	std::cout << "Enter num3: ";
	std::cin >> num3;

	std::cout << ( num1 > num2 ? (num1 > num3 ? num1 : num3) : (num2 > num3 ? num2: num3) );
	std::cout << " is maximun among " << num1 << ", " << num2 << " and "<<num3 << std::endl ;
	return 0;
}
