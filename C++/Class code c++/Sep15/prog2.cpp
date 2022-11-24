#include <iostream>

class Add {

	int x = 10;
	int y = 20;
	public: 
		void add() {
			std::cout << x+y << std::endl;
		
		/* x+y calls internally to the function operator+(int ,int ) which returns the addition
		*/	
		}
		/*
		int operator+(int y) {
			std::cout << "in operator+ function" << std::endl;
		}*/


};


//we cannot overload the predefined functions it will work only for the user defined 

int operator+(int x,int y) {
	std::cout << "in operator+ function" << std::endl;
}


int main() {
	int x = 10 , y =20;
	Add obj;
	obj.add();
	obj +  y;
	return 0;

}
