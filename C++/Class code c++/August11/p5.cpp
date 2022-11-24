
#include<iostream>

class parent{
	public:	
		int money = 1000;
		void totalMoney(){
			std::cout << "Total = "<<money << std::endl;
		}	


};



//by default type of the inheritance is private 
class child : public parent{

		

};



int main() {
	child c;

//	here money is  accessible bcoz it is public
	std::cout << c.money; 

}
