/*
 * Program 5 : Write a Program to print following Pattern.
Output :
0
0 0
0 0 0 
0 0 0 0
*
*/

#include <iostream>


int main() {
	int i,row;
	std::cout << "Enter row: ";
	std::cin >> row;

	for(int i=0; i<row; i++) {
		for(int j=0; j <=i; j++) 
			std::cout << " 0 " ;
		std::cout << std::endl;
	}	
	return 0;
}

