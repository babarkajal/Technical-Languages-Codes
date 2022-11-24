/*
 * Program 4: Write a Program to Print following Pattern
1 2 3 4
5 6 7 8
9 10 11 12
13 14 15 16
*
*/

#include<iostream>

int main() {
	int row;
 	std::cout << "Enter num of rows: ";
	std::cin >> row;
		
	int count = 1;

	for(int olc = 0; olc<row ;olc++) {
		for(int ilc = 0; ilc<row ;ilc++) {
			if(count < 10) 
				std::cout << count++ << "  ";
			else
				std::cout << count++ << " ";
		}
		std::cout << std::endl;
	}
	return 0;

}
