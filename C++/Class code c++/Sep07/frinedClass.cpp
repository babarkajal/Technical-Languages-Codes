#include<iostream>


class Bappa {

	int danPeti;
	public:
		std::string prasad;
		Bappa(){

			std::cout << "In constructor " << std::endl;
		
		}
		Bappa(int danPeti,std::string prasad) {
			this -> danPeti = danPeti;
			this -> prasad = prasad;
			std::cout <<"In para constructor" << std::endl;
		}
		
		/*
		Bappa(Bappa &cpy){

			std::cout <<"In copy constructor" << std::endl;

		}*/
		friend void karykarta(Bappa ref);
};


//private instance varibles are accessble bcoz it declared as a frined  
void karykarta(Bappa ref) {
		
		std::cout << ref.danPeti<<std::endl;
		std::cout << ref.prasad<<std::endl;
		
}

/*
--------error------

private varibles are not accessible outside the class even though the fun has reference to the obj
void fun(Bappa &ref) {

		std::cout << ref.danPeti<<std::endl; //error
		std::cout << ref.prasad<<std::endl;


}
*/

int main(){

	Bappa morya;
	
	Bappa mahaGanpti(1000,"Modak");
	karykarta(mahaGanpti);
	//fun(mahaGanpti);
	return 0;
}
