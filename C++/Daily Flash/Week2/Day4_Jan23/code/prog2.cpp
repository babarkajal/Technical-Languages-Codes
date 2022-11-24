/*
 rogram 2: Write a Program to Print following Pattern
1
2 3 
4 5 6 
7 8 9 10
*/

#include <iostream>

int main () {
	int row, var=1;
	std::cout << "Enter row: " ;
	std::cin >> row;
	
	for(int olc = 0; olc<row; olc++) {
		
		for(int ilc = 0; ilc<=olc; ilc++) {
			std::cout << var++ << " ";
		}
		std::cout << std::endl;

	}
	return 0;
}
