//overload member selector operator

#include <iostream>

class X {
	int a =10;
	public:
		void operator ::(Y &y){
				
		}
};

class Y {
	int b =20;
	

};

int main() {
	X y;
	y::display();

}

