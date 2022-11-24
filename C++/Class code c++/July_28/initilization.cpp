//types of initilization

#include <iostream>


int main() {

	int a= 10; 	//copy initilization
	int b(10);	//direct initilization
	int c{30};	//uniform initilization
	
	std::cout  << a <<"\t" << b << "\t" << c << std::endl;
}
