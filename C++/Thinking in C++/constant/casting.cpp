
//----------------------------------------------------------static_const-------------------------------------------------------------
//const to non-const conversion
//volatile to non-volatile conversion

#include <iostream>

int main() {
	const int i=10;
	int* j = (int*)(&i);	//casting 
	j = &i;
	
	std::cout << "address= " << j << std::endl;
	j=const_cast<int*>(&i);
	std::cout << "address= " << j << std::endl;
	
	long* k = (long*)(&i);	//casting 
	std::cout << "address= " << k << std::endl;
//	j=const_cast<long*>(&i);	//error conversion from const int* to long int
	std::cout << "address= " << k << std::endl;
}
