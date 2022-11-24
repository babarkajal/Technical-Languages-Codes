/*
 * Program 4: Write a Program to Print following Pattern.
1
4 9 
16 25 36
49 64 81 100
*/

#include <iostream>

int  main() {
	int row;
	std::cout << "Enter row num: ";
	std::cin >> row;
	int num=1;
	for(int i=0; i< row; i++){

		for(int j=0; j<=i; j++) {
			std::cout << num*num << "  ";
			num++;
		}
			std::cout << std::endl;
	}
	return 0;
}
