//passing address by reference 


#include <iostream>

void fun(const int* &ref) {
	std::cout << *ref <<std::endl;
}

void run(const int* ptr) {
	std::cout << *ptr << std::endl;	
} 

int main () {
	int i = 10;
	int j = 20;
	const int *ptr= &j;
	//fun(ptr);	//PTR contain address of the i as a value	
	//std::cout << *ptr;	
	fun(ptr);		
	run(ptr);
}
