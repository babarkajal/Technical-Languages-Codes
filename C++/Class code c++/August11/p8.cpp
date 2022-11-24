
//Accessing private members using reference varible 

#include <iostream>

class parent{
	int a = 10;
	float b = 20.20;
	
	public:
		void display (int &a , float &b){
				
			a = this -> a;
			b = this->b;
		}
				


};

int  main(){

	parent p;
	int a;
	float b;

	p.display(a,b);
	std::cout << "private values = "<< a << "\n" << b <<std::endl;
}


