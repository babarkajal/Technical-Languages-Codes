#include <iostream>

class constDemo{
	
	int  x =10;		
	public:

		constDemo(){
			std::cout << "No args" << std::endl;
		}
		
		//fun is by default constant 
		const void disp() const {	
//			std::cout << ++x <<std::endl;//we cannot change the varible value in const fun which having this pointer constant
			int a = 20;	
			
			std::cout << ++a << std::endl;	//we cannot change the values which are local to the const fun
			 
		}
		

};


int main() {
	
	constDemo obj;
	obj.disp();
	return 0;

}
