//--------------------ambigious function call----------------------

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


class B : public A {
	
	public:
		int k=20;
		B() {
			std::cout <<"B constructor" <<std::endl;
		}
		void bDisp() {
			std::cout <<"B Display" <<std::endl;
		}
	
	
};


class C : public A {
	
	public:
		int i = 10;
		C() {
			std::cout <<"C constructor" <<std::endl;
		}
		void cDisp() {
			std::cout <<"C Display" <<std::endl;
		}
};



class D :public B,C {
	//all C class is private here		


};




int main() {
	
	D obj;
	std::cout << obj.k<<std::endl;
	std::cout << obj.i<<std::endl; //not accessible
	obj.aDisp();//ambigious call to aDisp complier confused from whoch parent it should be called
	return 0;

}
