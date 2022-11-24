// print pattern 
// * * * * 
// * * * * 
// * * * * 
// * * * *

#include <iostream>

int main() {
	for(int olc = 0; olc< 4; olc++) {
		for(int ilc = 0; ilc< 4; ilc++) {
			std::cout << " * ";
		}
		std::cout << std::endl;
	}
	return 0;
}
