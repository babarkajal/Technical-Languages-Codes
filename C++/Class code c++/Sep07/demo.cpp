

#include <iostream>

int count = 2;
class demo {
	int a = 10;
	public:
		demo() {
			std::cout << "No args" << std::endl;
		}
		demo(demo &ref) {
			
			std::cout << "Copy" << std::endl;
	
			if(count==2) 
				demo obj = ref;	
			std::cout << "After copy "<< std::endl;
		}
};

int main() {

	demo obj1;
	demo obj3 = obj1;
}
