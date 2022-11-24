


#include <iostream>

class X {
	public:
		X() {
			std::cout << "In constructor X " <<std::endl ;
		}
		X(X& x){
			std::cout << "In constructor X " <<std::endl ;
		}
		
};
	
class Y:public X {
	public:
		Y() {
			std::cout << "In constructor Y" << std::endl ;
		}
};


int main() {

	X x1;
	X x2(x1);
	
}
