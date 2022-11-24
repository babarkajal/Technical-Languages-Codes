
/*-----------------------------------------------------
overload extraction operator using friend function
------------------------------------------------------
*/

#include <iostream>

class KFC {
	
	int type ;
	float price ;
	
	friend std::istream& operator>>(std::istream& , KFC&);
	
	public:
		void taste() {
				std::cout << "Spicy taste"<<std::endl;
				std::cout << type << std::endl;
				std::cout << price << std::endl;
		}
			
		//friend function for the overloading
		//friend ostream& operator<<(ostream& , KFC&);
};	

std::istream& operator >>(std::istream& in, KFC& ref) {
	
	std::cout << "Enter the num of types that KFC has: " <<std::endl;
	in >> ref.type;
	std::cout << "Enter price: " <<  std::endl;
	in >> ref.price;
	return in;
}

int main() {
	KFC party;
	
	//here we are going to print the whole object without overloading operator
	//std::cout << party << std::endl;		//error: no match for operator
	
	//call the overloaded function operator<<
	std::cin >> party;
	party.taste();		
		
	
}
