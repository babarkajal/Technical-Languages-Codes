#include<iostream>

int main() {

	int num1,num2;
	std::cout << "Enter number 1: " ;
	std::cin >> num1;

	std::cout << "Enter number 2: " ;
	std::cin >> num2;


	
	//multiplication
	std::cout << "Mulitplication: " << num1 * num2 << std::endl;	

	//division
	if(num1 > num2)
		std::cout << "Division: " << num1 / num2 << std::endl;
	else
		std::cout << "Division: " << num1 / num2 << std::endl;
        return 0;
        
 }


