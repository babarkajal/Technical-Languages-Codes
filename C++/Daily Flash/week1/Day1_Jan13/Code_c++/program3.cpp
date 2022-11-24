// program to check number even or odd
#include<iostream>

int main() {
	int num;

	std::cout << "Enter number: " ;
	std::cin >> num;

	if(num%2 == 0) 
		std::cout << num <<" is even number" << std::endl; 	
	else 
		std::cout << num <<" is odd number" << std::endl; 	

	return 0;
}
