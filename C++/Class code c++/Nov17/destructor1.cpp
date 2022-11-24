//---------------------------------------- Destructor ---------------------------------------------------

#include <iostream>
class Y; 
class X {
	public:
		X() {
			std::cout <<"In constructor X" << std::endl;
		}
		~X() {
			std::cout << "In destructor X" <<std::endl;
		}
/*		X(Y &y){
			std::cout << "In copy constructor of X(y) " << std::endl;
		}
*/		
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
	//X x; //constructor call
	Y y; //constructor call
	X *ptr= new X(y);//copy constructor
	
}

