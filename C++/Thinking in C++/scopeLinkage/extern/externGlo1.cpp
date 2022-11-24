#include <iostream>

void fun();
int main() {
	extern int a;
	std::cout << "In main" << std::endl;
	std::cout << "a = " << a << std::endl;
	fun();
	std::cout << "a = " << a << std::endl;

	
}
