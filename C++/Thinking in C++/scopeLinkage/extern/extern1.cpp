#include <iostream>

//declared a var
int a=20;

void show();

int main() {

		extern int a;
		std::cout<<"a = " <<a<<std::endl; 

		show();

		std::cout<<"a = " <<a<<std::endl; 
}

