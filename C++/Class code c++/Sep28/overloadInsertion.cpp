
/*-----------------------------------------------------
overload insertion operator using frined function
------------------------------------------------------
*/

#include <iostream>

class KFC {
	
	int type = 100;
	float price = 720.00;
	
	friend std::ostream&   operator<<(std::ostream& , KFC&);
	
	public:
		void taste() {
				std::cout << "Spicy taste"<<std::endl;
		}
			
		//friend function for the overloading
		//friend ostream& operator<<(ostream& , KFC&);
};	

std::ostream& operator<<(std::ostream& out, KFC& ref) {
	
	out << "type = "<< ref.type <<std::endl;
	out << "price = " << ref.price << std::endl;
	return out;
}

int main() {
	KFC party;
	
	//here we are going to print the whole object without overloading operator
	//std::cout << party << std::endl;		//error: no match for operator
	
	//call the overloaded function operator<<
	std::cout << party << std::endl;		
		
	
}
