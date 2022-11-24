
#include <iostream>

int main() {
	int num1,num2;
	std::cout << "Enter num1: ";
	std::cin >> num1;
	
	std::cout << "Enter num2: ";
	std::cin >> num2;
        
        std::cout << "Before swapping\n";
	std::cout << num1 << "  " << num2 << std::endl;	
	int temp= num1;
	num1 = num2;
	num2 = temp;

	std::cout << "Before swapping\n";
	std::cout << num1 << "  " << num2 << std::endl;	
        return 0;
}

