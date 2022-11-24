#include<iostream>

int main() {

	int num1,num2;
	std::cout << "Enter number 1: " ;
	std::cin >> num1;

	std::cout << "Enter number 2: " ;
	std::cin >> num2;


	
	//addtion
	std::cout << "Addition: " << num1 + num2 << std::endl;	

	//sub
	if(num1 > num2)
		std::cout << "Substraction: " << num1 - num2 << std::endl;
	else
		std::cout << "Substraction: " << num1 - num2 << std::endl;
        return 0;
}


