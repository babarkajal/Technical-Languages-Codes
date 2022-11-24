#include <iostream>

inline int fun() __attribute__((always_inline));
int main() {
	
	int a = fun();
	fun();
	return 0;
}
int fun() {
	std::cout << "hello\n";
}
