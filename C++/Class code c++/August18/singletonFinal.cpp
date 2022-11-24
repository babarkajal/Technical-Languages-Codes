//SingleTon design pattern

#include <iostream>

//forward declaration
class server;

int count=0;
server *s;

class server {
	
	private:
		server(){
			
			std::cout << "In Private constructor" << std::endl;
		}
	
	public:		
		static server* fun(){
			if(count == 0){
				s= new server();
				count++;
			}
				
			std::cout <<"s = " << s << std::endl;
			return s;
		}

};



int main() {
	
	server *s1 = server::fun();
	server *s2 = server::fun();
	server *s3 = server::fun();
		
	std::cout << s1 << std::endl;
	std::cout << s2 << std::endl;
	std::cout << s3 << std::endl;
	return 0;
}
