
/*-----------------------------------------------------
overload insertion operator using mem function
------------------------------------------------------
*/

#include <iostream>

class KFC {
	
	int type = 100;
	float price = 720.00;
	
	
	public:
		void taste() {
				std::cout << "Spicy taste"<<std::endl;
		}

		//mem function for overloading
		std::ostream& operator<<(std::ostream& out) {

				out << "type = "<< type <<std::endl;
				out << "price = "<< price <<std::endl;
			
		}
		
			
};	




int main() {
	KFC party;
	
	//here we are going to print the whole object without overloading operator
	//std::cout << party << std::endl;		//error: no match for operator
	
	//call the overloaded function operator<<
	 party << std::cout << std::endl;		
		
	
}
