#include <iostream>
//global varible
int a  = 20;
static int b = 30;

class ConstDemo {

	int x = 10;
	static int y;
	public: 

		//default constructor
		ConstDemo() {
		
			std::cout << "Constuctor" << std::endl;
			//call to parametrized constructor
			ConstDemo obj(x);

		}
		
		//parametrised constructor
		ConstDemo(int a){
			std::cout << "parameterized constructor"  << std::endl;

		}
		
		//static function 
		static void m1(){
			std::cout << y << std::endl; //50 
			std::cout << b << std::endl; //30
			
			
			//object creation by using new 
			//stored on the heap 
			ConstDemo *obj = new ConstDemo();
			std::cout << obj->x <<std::endl;
		}
		
		void m2() {
			std::cout << y << std::endl; //50 
			std::cout << b << std::endl; //30
			
			//object creation
			ConstDemo obj;		//default constructor call
			std::cout << obj.x << std::endl;//10
			std::cout << a << std::endl;//20
		}
		

		void m3() const{
			//object creation
			ConstDemo obj;	//call to default constructor
			std::cout << obj.x << std::endl; //10
			std::cout << a << std::endl;	//20
		}
		
		//constructor
		ConstDemo(ConstDemo obj,ConstDemo *obj1) {

			std::cout << "In Constructro" << std::endl;
			*this = obj;
		}
		
		void operator=(ConstDemo *&obj){
			std::cout << "In operator =";

		}
		
			

};

int ConstDemo::y=50;

int main() {

	//object creation on heap by usng new
	ConstDemo *obj = new ConstDemo();
	//function call
	obj->m1();
	obj->m2();

	const ConstDemo *obj2 = new ConstDemo();
	obj2->m3();	
		
	const ConstDemo *obj3 = obj2;
	return 0;
}	
