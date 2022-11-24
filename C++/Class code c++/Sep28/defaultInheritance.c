//default inheritance type is private

#include <iostream>

class parent {
	
	private:
		int a = 10;
	public:
		int b = 20;
	void displayp () {
		std::cout << a << b << std::endl;
	}
};


//default is private
class child : parent {
	private:
		int c = 30;
	public:
		int d = 40;
	void displayc () {
		std::cout<< c << d << std::endl;
		displayp();
	}


};

int main() {
	parent p;
	child c;
	
	p.displayp();
	c.displayp(); //error: inaccessible
	c.displayc();
}


