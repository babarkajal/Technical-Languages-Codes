#include <iostream>
using namespace std;

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


}
