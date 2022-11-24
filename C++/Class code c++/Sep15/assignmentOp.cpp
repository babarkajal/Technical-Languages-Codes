//assign one object  to other object of same and diff tyep


#include <iostream>

class pahila {
	int a;	
	public:
		void display() {
			std::cout << "a = " << a <<std::endl;
		}
};

class dusra {
	int b;	
	public:
		void display() {
			std::cout << "b = " << b <<std::endl;
		}
};

int main() {
	pahila obj1;
	dusra obj2;
	pahila obj3;
	
	//assignment same objects
	obj1 = obj3;

	obj1 = obj2;		//error 
	
}


