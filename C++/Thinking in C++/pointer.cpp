#include <iostream>
#include <stdio.h>


int main() {
	int *iptr;
	int a= 10;
	int* ptr,ptr2,ptr3;
	ptr = &a;
	ptr2=a;
	printf("%d\n",ptr2);
	std::cout << sizeof(iptr)<<std::endl;
	std::cout << sizeof(ptr)<<std::endl;
	std::cout << sizeof(ptr2)<<std::endl;
	std::cout << sizeof(ptr3)<<std::endl;


}
