#include <iostream>

void fun() {

	int a =10;
	std::cout << "Hello from the fun function "<<std::endl;


}


int main() {
	int i;
	
	std::cout<< "Address of the i is " << (int)&i << std::endl;
	std::cout<< "Address of the fun is " << &fun << std::endl;


}
