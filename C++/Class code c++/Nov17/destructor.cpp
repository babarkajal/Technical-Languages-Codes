//---------------------------------------- Destructor ---------------------------------------------------

#include <iostream>

class X {
	public:
		X() {
			std::cout <<"In constructor X" << std::endl;
		}
		~X() {
			std::cout << "In destructor X" <<std::endl;
		}
};

class Y :public X{
	public:
	Y() {
		std::cout << "In constructor Y " << std::endl;
	}
	~Y() {
		std::cout << "In destructor Y" << std::endl;
	}
};

int main() {
	X x; //constructor call
	Y y; //constructor call
}

