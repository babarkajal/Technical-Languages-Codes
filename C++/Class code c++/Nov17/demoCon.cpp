#include <iostream>

class X {
	public:
	int x=10;
	   X() {
		std::cout << "In constructor X" << std::endl;
	  }
	   X(int x) {
		(*this).x= x;
		std::cout << "In para constructor X" << std::endl;
	  }
	   X(X& x) {
		std::cout << "In copy constructor X" << std::endl;
	  }

};	

int main() {
	X x;
	X x2(100);
	X x3 = x2;
	X x4 =x+x2;
	std::cout << x4.x << std::endl;
	return 0;
}
