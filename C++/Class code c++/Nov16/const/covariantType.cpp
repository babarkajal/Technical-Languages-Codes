#include <iostream>


class X {
	public:
		virtual X* getName(){
			std::cout <<"parent class"<<std::endl;
			return this;
		}


};


class Y:public X {
	public:
		Y* getName(){
			std::cout <<"child class"<<std::endl;
			return this;
		}

};



int main() {

	Y y;
	X &ref= y;
	std::cout <<ref.getName()<<std::endl;
	return 0;
	


}
