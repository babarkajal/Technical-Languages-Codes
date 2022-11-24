
//reference varible :- It is an alternative name for the varible

#include <iostream>

void address(int & , int &);

int main() {

	int x,y;
	std::cout << "Enter two values: ";
	std::cin >> x >> y;
	
	//print the address
	std::cout << "&x = " << &x << std::endl; //100
	std::cout << "&y = " << &y << std::endl; //104
	
	address(x,y);	
}


void address(int& a, int& b) {

	std::cout << "&a = " << &a << std::endl; //100
	std::cout << "&b = " << &b << std::endl; //104
	

}
