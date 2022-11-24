#include <iostream>

class A {
	private:
		int x;
		int y;
	public:
		A() {
			std::cout << "In No argument constructor" <<std::endl;
		}	
		A(int i) {
			std::cout << "In paramerized  constructor" <<std::endl;
		}
		A (A &ref){
			std::cout << "In copy   constructor" <<std::endl;

		}	
		void display() {

			std::cout << "In function" <<std::endl;
			
		}

};


int main() {
	A a2=A();
	A a1 = A(10);
	A a =A(a1);


}
