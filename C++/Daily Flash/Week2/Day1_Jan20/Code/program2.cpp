/*
 * Program 2 : Write a Program that accepts an integer from user and print Sum of
all number up to entered number .
Input: 10
Output: The s um number up to 10 : 55
*
*/
#include <iostream>

int main() {
	
	int num,sum = 0;
	std::cout << "Enter num: " <<std::endl;
	std::cin >> num;

	for(int i = 1; i<=num; i++)
		sum += i;

	std::cout << "the sum up to " << num << ": " << sum << std::endl;
	return 0;
}
