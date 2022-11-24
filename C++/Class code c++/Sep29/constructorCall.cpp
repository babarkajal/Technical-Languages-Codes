#include <iostream>

class X {
	int x;
	public:
		X(){
			std::cout << "In default of X " <<std::endl;
		}


		X(int x){
			std::cout << "In para of X" <<std::endl;
		}
		X(X &ref){
			std::cout << "In copy of X" <<std::endl;
		}

};


class Y {
	int y;
	X x;
	public:
	
		Y(){
			std::cout << "In default Y " <<std::endl;
		}


		Y(int y){
			std::cout << "In para Y " <<std::endl;
		}
		Y(X ref){
			std::cout << "In copy of Y " <<std::endl;
		}
	
};

int main() {
	X x1;
	X x2(20);
	X x3(x2);
	X x4 = x2;
	X *ptr = new X(x1);

	x3=x2;
//	X x5(x5);
//	Y y(y);

}


