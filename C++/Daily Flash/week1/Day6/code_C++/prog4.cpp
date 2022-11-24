/*
*Program 4 : Write a Program to print First 50 Even Numbers
Output: 2 4 6 . . . 100
*
*/

#include <iostream>

int main() {

	std::cout << "First 50 EVEN Numbers: " << std::endl;
	int num =0;

	for(int i=1; i<= 50; i++){
		std::cout << num << " " ;
		num +=2;
	}
	std::cout << std::endl;
	return 0;
}
