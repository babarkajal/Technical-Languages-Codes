//comosition program


#include <iostream>

class Demo {
	int x = 10;
	int y =20;

	public: 
		//paramerized constructor
		Demo(int x ,int y){
			std::cout << "In Paramerised constructor" << std::endl;
			this->x = x;
			this->y = y;
		}	
		
		 display() {

			std::cout << x << " "  << y <<std::endl;
		}
		

};



class compDemo {
	int s =30;
	Demo d1;
	public:

	//copy constructor	
	compDemo(Demo d1){
		//when initilizing the instance var Demo d1 complier not found any default con then it will raise error		
		this->d1=d1;
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
	compDemo c1(d1);
	d1.display();
	return 0;
}




