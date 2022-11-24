//accessign private varible through normal function

#include <iostream>

class wallet {

		int money;
			
		public:
			wallet(int money) {
				this->money = money;
			}
			int payTeabill(){

				return money;
			}
};

//normal function
void accessWallet(wallet &ref){
	

	//call to the public method of the call
	std::cout << "Kapale gele paise" << ref.payTeabill() << std::endl;
}


int main() {

	wallet w(40);
	//first call to the normal function and for accessing the private var call to the public method of the class
	accessWallet(w);
	return 0;	
}

