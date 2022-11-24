#include <iostream>

class Add {

	int x = 10;
	int y = 20;
	public: 
		void add() {
			std::cout << x+y << std::endl;
		
		/* x+y calls internally to the function operator+(int ,int ) which return the addition
		*/	
		}
		
		
		

};

int main() {
	Add obj;
	obj.add();
	return 0;

}
