
//class inside a class

#include <iostream>

static class library {

	class book {

		int nPages;
		char aName[30];
		

	};
	book b;
	int tableNo;
	int noWorkers;

};

int main() {
	
	std::cout << "size = " << sizeof(library) << std::endl;
	library l;
	std::cout << "size = " << sizeof(l) << std::endl;
	return 0;

}
