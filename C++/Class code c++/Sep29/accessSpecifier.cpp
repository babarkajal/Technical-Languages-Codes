#include <iostream>

class A {
	private:
	int x = 10;
	public: 
		int y = 20;
	protected:
		int z = 30;

};

class child: private A{
//	y = 10;
	
	public:
		child(){
			z =40;
			y =30;
		}
		void display (){
			std::cout<< z<<std::endl;
			std::cout << y <<std::endl;
		}	

}; 

int main() {

	child C;
	C.display();

}

