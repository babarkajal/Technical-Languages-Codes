// program to check number is positive, negative or zero

#include<iostream>

int main() {
	int num;

	std::cout << "Enter number: " ;
	std::cin >> num;
	if(num > 0) 
		std::cout << num <<" is positive number" << std::endl; 	
	else if(num < 0)
		std::cout << num <<" is negative number" << std::endl; 	
	else 
		std::cout << num <<" is equal to zero" << std::endl; 	

	return 0;
}
