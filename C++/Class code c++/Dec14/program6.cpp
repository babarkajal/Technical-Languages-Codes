//template function

#include <iostream>


template <typename T> 

T max (int x , int y) {

	return (x > y) ? x :  y;
}

int main() {

	int i = max<int>(3,7);
	std::cout << i << std::endl;
	
	float j = max<float>(7.5, 3.5);
	std::cout << j << std::endl;
}
