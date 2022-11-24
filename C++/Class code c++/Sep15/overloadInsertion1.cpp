//overload Insertion operator
#include <iostream>
using namespace std;
class X {

	int x = 10;
	int y = 20;
	public:
		friend ostream& operator<<(std::ostream &out , X x);


};

ostream& operator<<(std::ostream &out , X ref) {
 	
		std::cout << "In function operator<< "<< std::endl;
		std::cout << "Private varibles = " << ref.x << std::endl << ref.y << std::endl;
		return out;
}

int main() {
	X x;
	std::cout << x <<std::endl;
		
}
