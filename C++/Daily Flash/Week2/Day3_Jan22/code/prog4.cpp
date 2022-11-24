#include <iostream>

int main() {
	int num1,num2;
	char opcode;

	//enter num1
	std::cout << "Enter number 1: ";
	std::cin >> num1;
	//enter num2	
	std::cout << "Enter number 2: ";
	std::cin >> num2;

	//accpet opcode;
	std::cout << "ENter opcode : "<<std::endl;
	std::cin >> opcode;

	switch(opcode) {
		case '+':
			std::cout << "Addition of "<<num1 <<  " & " << num2 << " : " << num1+num2 <<std::endl;
			break;

		case '-':
			
			std::cout << "Substraction of "<<num1 <<  " & " << num2 << " : " << num1-num2 <<std::endl ;
			break;
		case '*':
			std::cout << "Multiplication of "<<num1 <<  " & " << num2 << " : " << num1*num2 << std::endl;
			break;
		case '/':
		        std::cout << "Division  of "<<num1 <<  " & " << num2 << " : " << num1/num2 << std::endl;
			break;
		default:
			std::cout << "Wrong operation entered" << std::endl;
			break;

		}
		return 0;

}
