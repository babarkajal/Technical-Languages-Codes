/*
 * Program 5: Write a Program to print following Pattern.
Output:
0 0 0 0
1 1 1 1
0 0 0 0
1 1 1 1
*/

#include <iostream>

int main() {
	int row;
	std::cout << "Enter rows: ";
	std::cin >> row;

	for(int i = 0 ; i< row; i++) {
		for(int j = 0 ; j < row; j++) {
			if(i%2==0)
				std::cout << " 0 ";
			else
				std::cout << " 1 ";
			
		}
		std::cout << std::endl;
	}
	return 0;

}
