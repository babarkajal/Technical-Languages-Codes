#include <iostream>

float fun(int,...) {

	std::cout << "Inside the fun\n";
//	return 1;
}
int main() {

	int i=fun(10,'K');
	std::cout << i <<std::endl;
	std::cout <<"After the fun\n";

}
