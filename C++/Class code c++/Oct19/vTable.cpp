
#include <iostream>

class Base{
	public:
		int (*__vptr)();
    		virtual void function1() {
			std::cout << "In Base function 1" <<std::endl;
    		}	
	    	virtual void function2() {
			std::cout << "In Base function 2" <<std::endl;
		}
};
 
class D1: public Base{
		public:
    		virtual void function1() {
			std::cout << "In Derived 1 function 1" <<std::endl;
		}
};
 
class D2: public Base{
	public:
   	virtual void function2() {
	
			std::cout << "In Derived 2 function 2" <<std::endl;
	};
};


int main() {
	 D1 d1;
   	 Base *dPtr = &d1;
 	 dPtr->function1();
    return 0;
	return 0;
}
