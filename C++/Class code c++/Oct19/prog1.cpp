//-------------------virtual function------------------------

#include <iostream>

class A {
	public: 
		int a= 10;
		A() {
	
			std::cout << "In Construcotr A" <<std::endl;
		}
		 virtual void display() {

			std::cout << "In display A" <<std::endl;
			std::cout << a <<std::endl; 
		}	


};


class B:public A{
	public:
		B() {
	
			std::cout << "In Construcotr B" <<std::endl;
		}
		 void display() {
			
			std::cout << "In display B" <<std::endl;
			std::cout << a <<std::endl; 
		}

		
};	


int main() {

	B obj1; //call to constructor A and B
	B *obj2 = new B(); //call to constructor A and B
	obj1.display(); //call to the base function 
	obj2->display(); //call to the base function
	A *obj3 = new B(); //call to base  constrcuctor
	obj3->display(); //call base class function
	

}










