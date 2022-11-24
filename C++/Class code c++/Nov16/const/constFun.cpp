#include <iostream>

class x{
	public:
		int x = 10;
			
		virtual void display(int a) {

			std::cout <<"in display x"<<std::endl;
			std::cout << x << std::endl;	
			//x = a;
			std::cout << x << std::endl;	
		}
};






class y : public x{

	public:		
		int y = 20;
		
		void display(int a) const  {		
			std::cout <<"in display Y"<<std::endl;
			std::cout << y << std::endl;	
			//y=a;
			std::cout << y << std::endl;	
		}
};



int main() {
	y a;
	a.display(10);
	x &ref = a;
	ref.display(40);
}
