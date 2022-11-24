#include <iostream>

struct company {
	public:
	int id;
	char *name;
	void display();

};

void company:: display() {
	this->id=10;
	std::cout << "In display funciton" << std::endl;
	std::cout << id;
}
int main(){
	company c;
	c.display();
}
