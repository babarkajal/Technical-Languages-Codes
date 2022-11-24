#include <iostream>

class Demo {
	public:
	Demo fun() {				//virtual ky sangto ki thamb jara jr child ne method override keli asel tr ti call kar
		std::cout << "In parent fun" << std::endl;
	}

};

class Child: public Demo {
	public:
	Child fun() {
		std::cout << "In chidl fun" << std::endl;
	}

};
int main() {
	Child c;
	c.fun();
	Demo* d= new Child();
//	std::cout << "i = " << i << std::endl;
}
