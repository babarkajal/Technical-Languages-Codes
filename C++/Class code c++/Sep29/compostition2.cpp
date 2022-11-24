//comosition program


#include <iostream>

class Demo {
	int x = 10;
	int y =20;

	public: 
		//default constructor
		Demo() {
			
			std::cout << "In default constructor" << std::endl;

		}

		//paramerized constructor
		Demo(int x ,int y){
			std::cout << "In Paramerised constructor" << std::endl;
			this->x = x;
			this->y = y;
		}	
	
		Demo(Demo &){
			
			std::cout << "In Copy constructor" << std::endl;
			
		}	
		void display() {

			std::cout << x << " "  << y <<std::endl;
		}
		

};



class compDemo {
	int s =30;
	Demo d1;
	compDemo *p=NULL;
	public:

	//copy constructor	
	compDemo(Demo d1){
		std::cout << "Compdemo const " << std::endl;
	}
	
	compDemo(compDemo *p) {
		std::cout << "*pointer" << std::endl;
		this->p=p;
		
	}
	compDemo(compDemo &ref){
		std::cout << "CompDemo copy constructor" << std::endl;
	}


	void display() {
		//call the display method of Demo class
		d1.display();
		std::cout << "s= "<< s <<std::endl;
	}

};


int main() {
	
	Demo d1(50,60);

	//Call the copy constructor
	compDemo *c1 = new compDemo(d1);
	compDemo *c2 = c1;
	c1->display();
	return 0;
}




