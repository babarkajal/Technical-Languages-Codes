/*
Program 5: Write a Program to Find Maximum between three numbers
Input: 1 4 2
Output: 4 is Max number among 1, 4 & 2
*/


#include <iostream>

int main() {
	int num1, num2, num3;
	std::cout << "Enter three numbers: " <<std::endl;
	std::cin >> num1 >> num2 >> num3;

	if(num1 > num2 &&  num1 > num3) 
		std::cout << num1 <<" is max number among " << num1 << ", "<< num2 << " & " << num3 << std::endl;

	else if(num2 > num1 && num2 > num3) 
		std::cout << num2 <<" is max number among " << num2 << ", "<< num2 << " & " << num3 << std::endl;
	
	else 
		std::cout << num3 <<" is max number among " << num2 << ", "<< num2 << " & " << num3 << std::endl;
	return 0;
}
