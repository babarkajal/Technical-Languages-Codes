
//reference varible :- It is an alternative name for the varible

#include <iostream>


int main() {

	int y=10;
	std::cout << &y << std::endl; //100
	
	int &x = y;
	std::cout << &x << std::endl; //100
		
}
