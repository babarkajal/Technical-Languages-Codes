//overload Insertion operator
#include <iostream>

class X {

	int x = 10;
	int y = 20;
	public:
		friend std::ostream& operator<<(std::ostream &out , X &x);


};

std::ostream& operator<<(std::ostream &out , X &ref) {
 	
		std::cout << "In function operator<< "<< std::endl;
		std::cout << "Private varibles = " << ref.x << std::endl << ref.y << std::endl;
	
}

int main() {
	X x;
	std::cout << x << std::endl;
}
