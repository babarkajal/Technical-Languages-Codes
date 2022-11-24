#include <iostream>
void fun() {

	extern int i;
	std::cout << "i= " << i << std::endl;	//error: linking error

}
