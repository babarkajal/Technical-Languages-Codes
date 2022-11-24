//overload the operator '*' 

#include <iostream>

class Y;

class X {
	int x = 10 ;
	int y = 20;
	friend int operator*(X &x , Y &y);

};

class Y {
	int u = 30 ;
	int v = 40;
	friend int operator*(X &x , Y &y);

};

int operator  *(X &x,Y &y){
	
	std::cout <<"Multiplication of two objects : "<<std::endl;
	std::cout <<x.x * y.u << std::endl;
	std::cout <<x.y * y.v << std::endl;
}


int main() {

	//object creatin
	X x;
	Y y;
	//call to the operator* function
	x * y;
	return 0;
}

