#include <iostream>

int a=200; //Error multiple defination of a

void show() {
	std::cout << "In show\n a = " << a <<std::endl;
	a=300;
}
