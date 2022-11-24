/*Program 1: Write a Program to Print following Pattern
1
2 2 
3 3 3
4 4 4 4*/

#include <iostream>

int main () {
	int row;
	std::cout << "Enter row: ";
	std::cin >> row;
	
	for(int olc = 0; olc<row; olc++) {
		for(int ilc = 0; ilc<=olc; ilc++) {
			std::cout << olc+1 << " ";
		}
		std::cout << std::endl;
	}
	return 0;
}
