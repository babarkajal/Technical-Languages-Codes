
#include <iostream>

class Multiplex {
	
	/*two instance variables 
	 * name = to store name of the mall
	 * loc = to store location of the mall
	 */
	std::string name;
	std::string loc;
	int AcVentinsys;
	public:
		//default constructor initilize all values to the null
		Multiplex() {
			name=NULL;
			loc = NULL;
			AcVentinsys = 4;
		}

		Multiplex(std::string name, std::string loc) {
			this->name = name;
			this->loc = loc;
			AcVentinsys = 4;
		}

		void amenities() {
			std::cout << "Name: " << name << std::endl;
			std::cout << "Location: "<< loc << std::endl;
			std::cout << "Five movie theaters" << std::endl;
		}

};

class movie {
	std::string mName;
	int price;
	public:
	movie() {
	}

	movie(mName, price) {
		this->mName  = mName;
		this->price = price;
	}
};


class movieHall: public  Multiplex {
	int numOfSeats;
	int price;
	int noOFScreens;

	movie m;

	public:

	movieHall() {
	
	}

	movieHall(int n, int p , int noOfScreen, movie m) {
		this->numOfSeats = n;
		price= p;
		noOfScreens = noOfScreen;
		this->m = m;
	}

};



int main() {
	
	Multiplex m1("Kumar Pacific","Pune" ); 
	Multiplex m2("Season Mall","Hadapsar" ); 
	Multiplex m3("Anamora","Hadapsar" );
	
	
	movieHall mov1(200,300,3, movie("Tanaji",300));
	movieHall mov2(300,250,5, movie("Malang"250));
	movieHall mov3(,300,3, movie("Panipat",200));

		
	

}
