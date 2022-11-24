//template function for addtion of two num of any same type

#include <iostream>



int max(int x ,int y) {
	return (x > y) ? x : y;
}

float max(float x ,float y) {
	return (x > y) ? x : y;
}


int main () {
	int x , y;
	std::cout << "Enter two int values " << std::endl;
	std::cin >> x >> y;
	std::cout << "Maximum = " << max(x,y) << std::endl;

	float p , q;
	std::cout << "Enter two float values " << std::endl;
	std::cin >> p >> q;
	std::cout << "Maximum = " << max(p,q) << std::endl;
} 
