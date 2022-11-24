//accessign private varible through friend function

#include <iostream>

class wallet {

		int money;
			
		public:
			wallet(int money) {
				this->money = money;
			}

			//friend function
			friend void accessWallet(wallet &ref);
};

//defination for the friend function which accessing the private var
void accessWallet(wallet &ref){

	std::cout << "Kapale gele paise" << ref.money << std::endl;
}


int main() {

	wallet w(40);
	//call frined function
	accessWallet(w);
	return 0;	
}

