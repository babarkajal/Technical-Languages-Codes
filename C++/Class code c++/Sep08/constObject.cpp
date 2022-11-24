#include <iostream>
class constDemo {

	static int x;
	int y = 20;
	
	public:
		constDemo(){
			std::cout << "In default constructor" << std::endl;
		}
		void disp() {
			int a = 20;
			std::cout << ++x << std::endl;
			std::cout << a++ << std::endl;
			std::cout << y << std::endl;
			
		}
};

int constDemo::x=10;



int main() {

	const constDemo obj; //error can be converted into warning by complining the code with -fpermissive option
	obj.disp();
	return 0;
}
