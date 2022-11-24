#include<iostream>

int main() {

		int i =100;
		void* vp = &i;
		*((int*)vp) = 65;
		std::cout << (int*)vp << std::endl;
		std::cout << *(int*)vp << std::endl;
		
		std::cout << (char*)vp << std::endl;
		std::cout << *(char*)vp << std::endl;
		
		std::cout << (float*)vp << std::endl;
		std::cout << *(float*)vp << std::endl;
		return 0 ;
	
	
}
