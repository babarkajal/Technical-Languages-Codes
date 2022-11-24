//comma as a seprator and operator

#include <iostream>

int main() {

	int i ,j = 20,k = 30; 
	
	i=10,20,30;	//works as (i=10),20,30 
	std::cout << "i = " << i <<std::endl; //10
	
	i=(j++,++k);	//here comma works as a operator to separate the expressions 
	
	std::cout << "i = " << i <<std::endl;//31
	std::cout << "j = " << j <<std::endl; //21
	std::cout << "k = " << k <<std::endl; //31
	
}

