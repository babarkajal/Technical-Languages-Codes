/*
 * Program 3 : Write a Program to print First 50 Odd Numbers .
Output: 1 3 5 . . . 99
*
*/

#include <iostream>

int main() {

	std::cout << "First 50 odd Numbers: " << std::endl;
	int num =1;

	for(int i=1; i<= 50; i++){
		std::cout << num << "  ";
		num +=2;
	}
	std::cout << std::endl;
}
