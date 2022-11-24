/*
 * Program 5: Write a Program that accepts an integer from user and prints all of
its perfect divisors.
Input: 24
Output: Perfect Divisors of 24 are: 2 3 4 6 8 12
*/

#include<iostream>

int main() {
	int num;
	std::cout << "Enter num: ";
	std::cin >> num;
	std::cout << "Perfect Divisors of " << num << " are: " << std::endl;
	for(int i=2; i<= num/2; i++) {
		
		if(num%i == 0)
			std::cout << i << "  ";
	}
	std::cout << std::endl;
	return 0;

}
