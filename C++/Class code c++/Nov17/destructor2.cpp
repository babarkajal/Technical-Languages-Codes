//---------------------------------------- Destructor ---------------------------------------------------

#include <iostream>
class Y; 
class X {
	public:
		int x = 20;
		X() {
			std::cout <<"In constructor X" << std::endl;
		}
		~X() {
			std::cout << "In destructor X" <<std::endl;
		}
		X(Y &y){
			std::cout << "In copy constructor of X(y) " << std::endl;
		}
		
		
};

class Y{
	public:
	int x =10;
	Y() {
		
		std::cout << "In constructor Y " << std::endl;
	}
	~Y() {
		std::cout << "In destructor Y" << std::endl;
	}
};

class Z : public Y, public X {
	public:
		Z() {
			std::cout << "In constructor Z " << std::endl;
		}
		~Z() {
			std::cout << "In destructor Z" << std::endl;
		}
};


int main() {
	Z z;	
}

