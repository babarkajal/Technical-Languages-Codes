//Program to find whether the given num is divisible by 5  and 11 or not

#include <iostream>

int main() {
	int num;
	std::cout << "Enter num: " <<std::endl;
	std::cin >> num;


	if(num%5 == 0 && num%11 == 0) 
		std::cout << num << " is divisible by 5 and 11" <<  std::endl;
	else 
		std::cout << num << " is not divisible by 5 and 11" <<  std::endl;
			
	return 0;
}
