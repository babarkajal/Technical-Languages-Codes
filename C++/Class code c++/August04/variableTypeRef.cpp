//value is another type and ref is another

#include<iostream>

int main() {
	float f = 20.65f;
	int &ref = f;	//error: both variable and ref should be of same type
	//const int &ref = f
	std::cout << f << "  " << ref <<  std::endl; 
}
