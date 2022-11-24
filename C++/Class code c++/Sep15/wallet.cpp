#include <iostream>

class Phone;
class wallet {
	
	//private varile
	int money = 10000;
	
	public:	
		//friend function to oth the classes
		friend void myFriend(wallet ref1 ,Phone &ref2);
 
};


class Phone {
	//private varile
	std::string whatsApp = "PC";
	int paytmMoney = 4000;
	
	public:
		//friend function to oth the classes
		friend void myFriend(wallet ref1 , Phone &ref2);
};

void myFriend(wallet ref1 , Phone &ref2) {

	std::cout << "Money in wallet " <<ref1.money << std::endl;
	std::cout << "Phone content " << ref2.whatsApp <<std::endl;
	std::cout << "Paytm money in account " << ref2.paytmMoney << std:: endl;

}

int main() {

	wallet W;
	Phone P;
	myFriend(W,P);
	return 0;

}



