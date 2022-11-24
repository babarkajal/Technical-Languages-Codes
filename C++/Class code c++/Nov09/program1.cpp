#include <iostream>


class A {
	public: 
		int a = 10;
	 	A() {
			std::cout << "Constructor A" << std::endl;	
		}
		void display() {

			std::cout << a << std::endl;

		}
};

class B :public A{

	public:
		int b = 20;	
		 B() {
			std::cout << "Constructor B() " << std::endl;
		}
		void display() {
			std::cout << b <<std::endl;
		}
};

class C:public A {
	public:	
		int c = 30;
		C() {
			std::cout << "Constructor C() " << std::endl;
		}
		void display() {
			std::cout << c <<std::endl;
		}
};

class D : public B, public C {
	public:
		int d = 40;
		D() {
			std::cout << "Constructor D()" << std::endl;		
		}
		void display() {
			std::cout << d <<std::endl;
		}
};



int main() {

	D d1;
 	d1.display();
	return 0;
}
