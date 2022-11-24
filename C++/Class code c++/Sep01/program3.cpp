//this pointer and static function

#include <iostream>


class thisDemo {

	int a=10;
	int b=20;
	public:
		//default constrctor
		thisDemo() {
			std::cout << "In default constructor " <<std::endl;
		}
	
		//parameterised constructor
		thisDemo(int a ,int b) {
			std::cout << "Parametarised constructor " << std::endl;
			this->a = a;
			(*this).b = b;
		//	*this.b = b;
			
		}
		
		//static function 
		static void display () {

			std::cout << this->a <<std::endl;
/*
			this pointer is avilable only with the non-static member functions 
			bcoz the static functions are can be called by any object 
*/
			std::cout << b <<std::endl;	//error non-static varibles cannot be used inside the static function
		}
};


int main() {

	thisDemo obj1;
	thisDemo obj2(30,40);
	obj1.display();
	obj2.display();
}
