#include <iostream>

struct library {

	private:
		static int noOfBooks;
	public:
		std::string bName ="Java";
	struct customer;			
	//friend customer;
	struct customer {
		void fun() {
			
		//	noOfBooks = 10;
			std::cout << noOfBooks << std::endl;
		}

	};

};
int library :: noOfBooks = 10;

int main() {
	library l;
	library::customer c;
	c.fun();

}
