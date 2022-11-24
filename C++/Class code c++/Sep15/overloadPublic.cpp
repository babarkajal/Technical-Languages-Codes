#include <iostream>
class Y;
class overloadPublic{

	public:
	int a =10;
	int  b=20;
	
	public:
		friend void operator+(overloadPublic &ref1 ,Y &ref2);
};



class Y {

	public:
		int c =30;
		int d= 40;
		friend void operator+(overloadPublic &ref1 ,Y &ref2);


};

void operator+(overloadPublic &ref1 ,Y &ref2) {
	std::cout << "In overloaded function operator+" << std::endl;
	std::cout << ref1.a + ref2.c <<std::endl;
	std::cout << ref1.b + ref2.d <<std::endl;
}


int main() {

	overloadPublic p;
	Y y;
	p+y;
	return 0;
}

