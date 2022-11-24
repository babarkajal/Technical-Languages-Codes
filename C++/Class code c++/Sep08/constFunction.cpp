//constant member function


#include <iostream>

class constDemo {

		int a =10;
		public:
			const void display () const{
				int c = 30;	
				c++;
				a++; //error: increament of member in read only object
				std::cout << a << std::endl;
			}
};

int x =50;

//error: we cannot use constant-volatile qualifiers 
void display() const {
		x++;
		std::cout << x <<std::endl;
} 

int main() {

	constDemo d;
	d.display();
	display();	
	return 0;
}
