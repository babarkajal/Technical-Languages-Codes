/*
 * Program 4: Write a Program to Print following Pattern.
0
1 1 
0 0 0 
1 1 1 1
0 0 0 0 0
*/
#include<iostream>
int main() {
	int row;
	std::cout << "Enter row num: ";
	std::cin >> row;

	for(int olc=0; olc<row; olc++) {
			for(int ilc=0; ilc<=olc; ilc++) {
				if(olc%2==0)
					std::cout << " 0 ";
				else
					std::cout << " 1 ";
			}
			std::cout << std::endl;
	}
	return 0;

}
