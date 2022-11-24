/*
 * Program 1: Write a Program to print series of Even numbers ranging between
two numbers entered by user.
Input:
Min of Series : 4
Max of Series: 60
Output: Series Of Even Numbers Ranging between 4 & 60 is:
4, 6, 8, . . ., 60
*/

#include <iostream>

int main() {
	int num1 ,num2;

	std::cout << "Enter min: ";
	std::cin >> num1;

	std::cout << "Enter max: ";
	std::cin >> num2;


	while(num1 > num2){
		std::cout << "Again Enter num2(> num2): ";
		std::cin >> num2;
	}
	std::cout << "Series of even num ranging between " << num1 << " and " << num2  << std::endl;
	for(int i = num1; i<= num2; i++)
		if(i%2==0)
			std::cout << i << " ";
        std::cout << std::endl;
               return 0;
}

