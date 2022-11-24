#include <iostream>
#include <malloc.h>
#include <cstring>

struct demo {
	std::string name;
};

int main () {
	demo d;
	demo *ptr = (demo*) malloc (sizeof(demo));
	ptr->name = '\0';		

	//using cin
	std::cout << "Enter name: ";
	std::cin >> ptr->name;
	std::cout << "Name = " << ptr->name << std::endl;
}
