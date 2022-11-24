//copy constructor

//if we have not provided a copy constructor then complier will provide and copy all the content of the one obj to other

#include <iostream>

class A{

	int i;
	int j;
	
	public:
			
		A(){

			std::cout << "In default constructor" << std::endl;
		}		
		A(int i,int j){
			
	
			this->i = i;
			this->j = j;
			std::cout << "In paramerized constructor" << std::endl;
			
			
		}
		A(A &obj2){
			
			std::cout << "In copy constructor" << std::endl;
		}
					
		
};


int main(){
	
	A obj1(10,20);
	
	//obj1 will be copied to the obj2
	A obj2(obj1);
		
	return 0;
}
