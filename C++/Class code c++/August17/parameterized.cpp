//parameterized constructor



#include <iostream>

class A{

	int i;
	
	public:
		A(int i){
			
			std::cout << "i = " << this->i << std::endl;	//garbage value
	
			this->i = i;

			std::cout << "In paramerized constructore" << std::endl;
			std::cout << "i = " << this->i << std::endl;
			
		}

};


int main(){
	
//	 A obj;		//error :- no matching function for call to A::A();		
	 A obj1(10);

	return 0;
}
