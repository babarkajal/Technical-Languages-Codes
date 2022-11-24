/*Program 5: Write a C program to calculate the factorial of a given number.
Input: 5
Output:
The Factorial of 5 is: 120
*/
#include <iostream>

int main() {
	int num, fact= 1;
	std::cout << "Enter num for factorial: ";
	std::cin >> num;

	for(int i=1; i<=num; i++)
		fact *=i;
	std::cout << "Factorial of  " << num << " : " << fact << std::endl;
        return 0;
}
