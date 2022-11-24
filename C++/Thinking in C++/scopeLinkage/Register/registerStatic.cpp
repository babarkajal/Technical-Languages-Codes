#include <iostream>

//register static int i =10;  //conflicting specifier
int register j=20;	 //not specified to J

int main() {
	int i=10;
	std::cout << i <<std::endl;
	std::cout << j <<std::endl;
}
