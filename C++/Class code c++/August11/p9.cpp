
//Accessing private members using pointer 

#include <iostream>

class parent{
	int a = 10;
	float b = 20.20;
	
	public:
		int *iptr = &a;
		float *fptr = &b;
				


};

int  main(){

	parent p;
	
	std::cout << "Accessing the private members using pointers: " << std::endl;
	std::cout << *p.iptr << "\n" << *p.fptr << std::endl;
	
}


