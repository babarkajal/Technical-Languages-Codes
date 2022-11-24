#include <iostream>

int main() {
	int r;
	std::cout << "enter num: ";
	std::cin >> r;
	std::cout << r;
	while(!r) {
		std::cout << "I am in\n" <<std::endl;
	}

}
