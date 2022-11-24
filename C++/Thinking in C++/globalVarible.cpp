#include<iostream>

int a;
void fun() {
	std::cout << "In inner fun" << std::endl;
}
	
struct XYZ{ 
	int a=10;
	void fun();
};

void XYZ:: fun() {
		std::cout << "In outer fun" << std::endl;
		a++;
		::a++;
		std::cout << ::a << std::endl;
		std::cout << a << std::endl;
		::fun();
}

int main() {
	XYZ X;	
	X.fun();

}
