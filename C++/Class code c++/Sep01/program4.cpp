//constructor of same class having object as a parameter of same class

#include <iostream>
class X {
	public:
		X(X x){	//invalied constructor
			std::cout << "In default constrctor" <<std::endl;
		}
};

int main() {
	X x;
	X y(x);

}
