//functions for arthimatic operations


#include <iostream>


//addition
void add(int x ,int y) {
	std::cout << x+y <<std::endl;
}

//substraction
void sub(int x ,int y) {
	std::cout << x-y <<std::endl;
}

//division
void div(int x ,int y) {
	std::cout << x/y <<std::endl;
}
//multiplication
void mult(int x ,int y) {
	std::cout << x*y <<std::endl;
}



int main() {
	
	int x , y;
	std:: cout << "Enter two values" <<std::endl;
	std::cin >> x >> y ;
	
	add(x,y);
	sub(x,y);
	div(x,y);
	mult(x,y);
	return 0;
}
