

#include<iostream>

class parent{
	public:	
		int money = 1000;
		void totalMoney(){
			std::cout << "Total = "<<money << std::endl;
			return 0;
		}	


};

int main() {
	parent p;
	
	//call function 
	
	std:: cout << totalMoney() << std::endl;	//totalMoney fun is not declared in this scope
	std:: cout << (int)p.totalMoney() << std::endl; 	//we can not call a fun which has void return type 
	 

}
