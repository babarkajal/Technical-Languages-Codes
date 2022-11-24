#include <iostream>
class X {
	public:
	int a;
	char c;
};

int main() {
	X x1;
	x1.a = 10;
	x1.c= 'a';
	std::cout << "X1.a: "<<x1.a<<std::endl;
	std::cout << "X1.c: "<<x1.c<<std::endl;
	X x2 = x1;

	x2.a = 20;
	x2.c='z';

	std::cout << "X2.a: "<<x2.a<<std::endl;
	std::cout << "X2.c: "<<x2.c<<std::endl;
	std::cout << "X1.a: "<<x1.a<<std::endl;
	std::cout << "X1.c: "<<x1.c<<std::endl;

		
}
