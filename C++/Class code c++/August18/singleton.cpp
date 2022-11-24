#include <iostream>


class server {

	private:
		server(){
			
			std::cout << "In Private constructor" << std::endl;
			
		}
	public:		
		static void fun(){
			server S;
		
		}

};


int main() {

	server::fun();
	return 0;
}
