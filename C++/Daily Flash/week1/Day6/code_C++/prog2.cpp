/*
 * Program 2 : Write a Program to print Sum of First 10 Natural Numbers.
Output: The s um of First 10 Natural Numbers : 55
*
*/
#include <iostream>

int main() {

	
	int sum = 0;
	
	for(int i=1 ;i <= 10 ;i++)
		sum += i;

	std::cout << "Sum of first 10 integers = "<< sum  << std::endl;
	return 0;
}
