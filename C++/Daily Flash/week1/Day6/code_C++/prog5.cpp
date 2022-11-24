/*
 * Program 5 : Write a Program to print following Pattern.
Output :
0 0 0 0
0 0 0 0
0 0 0 0
0 0 0 0
*
*/
#include <iostream>

int main() {
	int row;
	std::cout << "Enter row: ";
	std::cin >> row;

	for(int olc = 0 ;olc < row; olc++) {
		for(int ilc = 0; ilc < row ; ilc++)
			std::cout << " 0 ";
		std::cout << std::endl;
	}
	return 0;
}
