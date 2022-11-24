
/*-----------------------------------------------------
overload insertion operator using normal function
------------------------------------------------------
*/

#include <iostream>

class KFC {
	
	int type = 100;
	float price = 720.00;
	
	
	public:
		void taste() {
				std::cout << "Spicy taste"<<std::endl;
				std::cout << "type = "<< type <<std::endl;
				std::cout << "price = "<< price <<std::endl;
		}
			
};	


//normal function
std::ostream& operator<<(std::ostream& out, KFC& ref) {
		//call to the member function of the class for accessing the private varible 
		ref.taste();
		return out;
}


int main() {
	KFC party;
	
	//here we are going to print the whole object without overloading operator
	//std::cout << party << std::endl;		//error: no match for operator
	
	//call the overloaded function operator<<
	std::cout << party << std::endl;		
		
	
}
