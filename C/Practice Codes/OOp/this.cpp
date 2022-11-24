#include <iostream>

class Demo {
	int x = 20;
	public:
	Demo() {
		
	}

	void fun() const {
		a = 20;
		x = 30;


	}	
};

int main() {
	Demo d;
	d.fun(10);
}

