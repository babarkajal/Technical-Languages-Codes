#include <iostream>

class x{
	public:
		void display(int x) {				
			std::cout<< "In int x "<<std::endl;
		}
};


class y:public x{

	public:
		void display(float x){
			std::cout << "In float y"<<std::endl;
		}


};



int main() {

	y y1;
	y1.display(10);
	y1.display('k');
	return 0;


}

