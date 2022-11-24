/// if we make changes in the reference varible then it will reflect in original too


#include <iostream>

void foo(int &val) {
	
		val = 6;
		std::cout << "value= "<<  val <<std::endl;

}


int main() {
		int value=5;
		std::cout << "value= "<<  value <<std::endl;

		foo(value);
		std::cout << "value= "<<  value <<std::endl;

		return 0;
}


