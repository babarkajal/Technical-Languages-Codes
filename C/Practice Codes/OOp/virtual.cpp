#include <iostream>

class Demo {
	public:
	virtual void fun() const{				//virtual ky sangto ki thamb jara jr child ne method override keli asel tr ti call kar
		std::cout << "In parent fun" << std::endl;
	}

};

class Child: public Demo {
	public:
	void fun() const{
		std::cout << "In chidl fun" << std::endl;
	}

};
int main() {
	Child c;
	Demo* dc1 = new Child();
	dc1->fun();			//Cpp madhe method calling he complie time decide so parent chi method call keli jate
	Demo &d = c;
	d.fun();
	std::cout << sizeof(Demo) << std::endl;
}
