#include <iostream>

class A {
	int y=10;
	public:
		long x;
	protected:
		int j=30;
};

class Y : public A{
	int a;
public:
	void display() {
			std::cout << j << std::endl;
	}
};

int main() {
	Y y;
	y.display();
	std::cout << y.j << std::endl;
	std::cout << "Size of y "<< sizeof(y) << std::endl;


}
