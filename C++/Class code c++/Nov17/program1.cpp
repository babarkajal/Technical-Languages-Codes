
#include <iostream>

class Company {
	public: 
		Company() {
			std::cout << "Constructor Company() " << std::endl;
		}
};

class Employee:public Company {
	public:
		Employee() {
			std::cout << "Constructor Employee() " << std::endl;
		}
};

class X {
	public: 
		//composition
		Company C;
		virtual Company& m1() {
			std::cout << "Class x:m1" << std::endl;
		}
};


class Y: public X {
	public: 
		Employee E1;
		
		virtual Employee& m1() {
			std::cout << "Class y:m1()" << std::endl;
		}
};


int main() {
	Y y; // con calls company,company , employee 
	X &ref = y;
	ref.m1();
	return 0;
}
