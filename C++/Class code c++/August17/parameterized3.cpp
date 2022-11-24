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
		/*ambiguity to the constructor for call obj1(10,30.4);
		A(int i, float j){
		
		}*/
		
		void display(A &obj2){

			std::cout << "i = " << obj2.i << std::endl;
			std::cout << "j = " << obj2.j << std::endl;
			
			
		}

};


int main(){
	
	A obj1(10,20.25);
	
	//obj1 will be copied to the obj2
	A obj2(obj1);
	obj2.display(obj2);
		
	return 0;
}
