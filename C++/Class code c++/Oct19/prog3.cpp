//--------------------ambigious function call----------------------
//-------------------solution for dimand  problem--------------
#include <iostream>

class A {
	public:
		A() {
			std::cout <<"A constructor" <<std::endl;
		}
		void aDisp() {
			std::cout <<"A Display" <<std::endl;
		}
};


//make inheritance virtual
class B : virtual public A {
	
	public:
		int k=20;
		B() {
			std::cout <<"B constructor" <<std::endl;
		}
		void bDisp() {
			std::cout <<"B Display" <<std::endl;
		}
	
	
};


class C :virtual  public A {
	
	public:
		int i = 10;
		C() {
			std::cout <<"C constructor" <<std::endl;
		}
		void cDisp() {
			std::cout <<"C Display" <<std::endl;
		}
};



class D :public B,public C {
	//all C class is private here		


};




int main() {
	
	D obj;
	obj.aDisp();
	return 0;

}
