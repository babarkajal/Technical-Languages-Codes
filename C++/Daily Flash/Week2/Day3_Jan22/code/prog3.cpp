#include<iostream>

int main() {

	int num1,num2;
	std::cout << "Enter number 1: ";
	std::cin >> num1;
	std::cout << "Enter number 2: ";
	std::cin >> num2;
	
	
	int cube1 = num1*num1*num1;
	int square1 = num1*num1;

	int cube2 = num2*num2*num2;
	int square2 = num2*num2;

	//addtion of their cube
	std::cout << "Addition of "<< cube1 << " & " << cube2 << " = " << cube1 + cube1 <<std::endl; 

	//substraction of their square
	std::cout << "Substraction of "<< square1 << " & " << square2 << " = " << square1 -square2 <<std::endl; 
	return 0;
}


