#include<iostream>
class one {
	private:
		int a;
		int b;
		void display() {
		 	std::cout << "private display" << std::endl;
			
		}
	public:
		one() {
			std::cout << "One's con" << std::endl;
		}
		void display2() {
			display();
		 	std::cout << "display" << std::endl;
		}

};

class Two: public one {
	public:
		void show() {
			display2();
		}

};


int main() {
	Two t;
	t.show();
	return 0;

}

