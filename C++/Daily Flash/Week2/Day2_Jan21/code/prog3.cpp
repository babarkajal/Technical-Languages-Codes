/*
 * Program 3: Write a Program to print table of 2.
Output: 2 4 6 8 10 12 14 16 18 20
*
*/

#include <iostream>

int main() {
	std::cout << "Table of 2" <<std::endl;
	for(int i=1; i<=10; i++)
		std::cout << i*2 << "  " ;
	std::cout << std::endl;
	return 0;		
}
