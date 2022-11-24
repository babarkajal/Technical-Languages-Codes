//this pointer 

#include <iostream>


class thisDemo {

	int a=10;
	int b=20;
	public:
		thisDemo() {
			std::cout << "In default constructor " <<std::endl;
		}
		thisDemo(int a ,int b) {
			std::cout << "Parametarised constructor " << std::endl;
			this->a = a;
			(*this).b = b;
		//	*this.b = b;
			
		}
		void display () {

			std::cout << a <<std::endl;
			std::cout << b <<std::endl;
		}
};


int main() {

//	thisDemo obj1;
	thisDemo obj2(30,40);

	thisDemo(obj1); //this is same as creating a object and call to the default constructor

	obj1.display();
	obj2.display();
}
