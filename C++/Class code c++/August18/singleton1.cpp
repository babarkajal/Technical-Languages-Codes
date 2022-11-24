
#include <iostream>

class server {
	
	static int count;
	private:
		server(){
			
			std::cout << "In Private constructor" << std::endl;
			
		}
	public:		
		static void fun(){
			if(count == 0){
				server S;
				count++;
			}
			
		}

};


//static varible initilization

int server ::count=0;

int main() {

	server::fun();
	return 0;
}
