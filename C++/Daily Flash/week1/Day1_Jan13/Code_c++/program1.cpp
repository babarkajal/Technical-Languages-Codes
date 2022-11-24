//Program to find maximum num from given two num

#include <iostream>


int main() {
	int num1, num2;
	std::cout << "Enter num1: " <<std::endl;
	std::cin >> num1;

	std::cout << "Enter num2: " <<std::endl;
	std::cin >> num2;

	if(num1 > num2) 
		std::cout << num1 << " is max number among " << num1 << " & " << num2 << std::endl;
	else 
		std::cout << num2 << " is max number among " << num1 << " & " << num2 << std::endl;
			
	return 0;
}
