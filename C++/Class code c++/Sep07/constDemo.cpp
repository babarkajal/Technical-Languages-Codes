#include <iostream>



int main() {

	int a=10,b=20;
	const int *const ptr=&a;
	(*ptr)++;
	ptr=&b;
	std::cout<< *ptr;


}
