#include <iostream>

struct City {
	void Population();
};
void City :: Population() {
	std::cout << "In struct function" <<std::endl;
}

int main (){
	City c;
	c.Population();

}
