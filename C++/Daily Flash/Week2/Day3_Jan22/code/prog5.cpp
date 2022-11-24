#include <iostream>

int main() {
	int row;
	std::cout << "Enter rows: " << std::endl;
	std::cin >> row;

	for(int olc=0; olc<row; olc++){
		for(int ilc=0; ilc<=olc; ilc++)
			std::cout << " * ";
		std::cout << std::endl;
	}
	return 0;

}
