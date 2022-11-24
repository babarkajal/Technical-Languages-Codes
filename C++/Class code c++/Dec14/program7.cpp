//template function

#include <iostream>


template <typename T> 

T max (T x , T y) {

	return (x > y) ? x :  y;
}

int main() {

	int i = max<int>(3,7);
	std::cout << i << std::endl;
	
	double j = max<double>(7.5, 3.5);
	std::cout << j << std::endl;
}
