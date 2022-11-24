/*
 * Program 4: Write a Program to Print following Pattern
1 2 3 4
1 2 3 4
1 2 3 4
1 2 3 4
*
*/

#include <iostream>

int main() {
	for(int olc = 0; olc < 4; olc++ ) {
		for(int olc = 1; olc <= 4; olc++ ) {
			std::cout << olc << " ";
		}
		std::cout << std::endl;
	}
	return 0;
}
