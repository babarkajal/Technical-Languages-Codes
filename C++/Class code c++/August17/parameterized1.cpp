//parameterized constructor



#include <iostream>

class A{

	int i;
	
	public:
		A(){

		}	
		A(int i){
			
	
			this->i = i;

			std::cout << "In paramerized constructore" << std::endl;
			std::cout << "i = " << this->i << std::endl;
			
		}

};


int main(){
	
	 A obj1(10);
	
	//below lines are same which calls to the copy constructor
//if copy con is not present then complier will add it 
	 A obj2(obj1);	
	 A obj3=obj1;
	return 0;
}
