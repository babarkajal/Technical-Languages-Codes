/*Program 3: Write a Program to print Cubes and Squares of all Odd numbers
ranges between given input number.
Input: 10
Output:
Cube of 1 : 1 and Square of 1 :1
Cube of 3 : 27 and Square of 3 :9
.
.
Cube of 9 : 729 and Square of 9 : 81
*/

#include<iostream>

int main() {
	int n;
	std::cout << "Enter num: ";
	std::cin>>n;

	for(int i=1; i<=n; i++) {
			std::cout << "Cube of "<< i  <<": "<<i*i*i << " and Sqaure of " << i << ": "<< i*i << std::endl;
	}
	return 0;
}
