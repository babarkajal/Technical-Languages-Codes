/*
 * Program 2: Write a Program to all the numbers ranging between 1 to 100 that
are divisible by 4 and 7.
Output: 28 56 84
*
*/

#include <iostream>

int main() {
	for(int i=1; i<=100; i++) {
		if(i%4==0 && i%7==0)
			std::cout << i << " ";
	}
	std::cout << std::endl;
	return 0;
}
