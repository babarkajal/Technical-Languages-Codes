/*Program 4: Write a Program to Print following Pattern
*
* * 
* * *
* * * * 

*/



#include <iostream>

int main () {
	int row;
	std::cout << "Enter row: ";
	std::cin >> row;

	for(int olc = 0; olc<row; olc++) {

		for(int ilc = 0; ilc<=olc; ilc++) {
		        std::cout << " * ";	
		}
		std::cout << std::endl;

	}
	return 0;
}
