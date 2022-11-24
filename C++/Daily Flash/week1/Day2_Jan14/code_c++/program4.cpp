/*
Program 4: Write a Program to Print following Pattern
1 1 1 1
1 1 1 1
1 1 1 1
1 1 1 1
*/


#include <iostream>

int main() {
	for(int olc = 0; olc<4; olc++) {
		for(int ilc = 0; ilc<4; ilc++) {
			std::cout << " 1 " ;
		}
		std::cout<<std::endl;
	}
	return 0;
}


