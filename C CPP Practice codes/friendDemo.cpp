//one class

#include <iostream>
using namespace std;

class Home {
	int locker;
	std::string  food;
	
	public:
		Home(int locker , std::string food) {
			this->locker = locker;
			this->food  = food;
		}

		friend void payingguest(Home&);


};


void payingguest(Home& h) {
			std::cout << "In frined function" << std::endl;
			std::cout << h.locker << "  "  << h.food << std::endl;
}

int main() {
	Home h(20000, "Dal rice") ;
	payingguest(h);
	return 0;	

}
