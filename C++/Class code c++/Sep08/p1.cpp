#include <iostream>

class constDemo{
	
	const int  x =10;		//if we change this value compiler will raise an error except within constructor
	public:

		constDemo(){
			std::cout << "No args" << std::endl;
		}
		
		//fun is by default constant 
		const void disp() {	
			std::cout << x <<std::endl;
		}
		

};


int main() {
	

	constDemo obj;
	obj.disp();
	return 0;

}
