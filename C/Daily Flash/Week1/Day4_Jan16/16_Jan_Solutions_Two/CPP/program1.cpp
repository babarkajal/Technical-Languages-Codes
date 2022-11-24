
#include <iostream>

main() {
	int a, b, c;

	std::cout << "Enter Side1 : ";
	std::cin >> a;

	std::cout << "Enter Side2 : ";
	std::cin >> b;

	std::cout << "Enter Hypotenus : ";
	std::cin >> c;

	if(a > 0 && b > 0 && c > 0){
		if(a * a + b * b == c * c)
			std::cout << ("Triangle satisfies Pythagoras Theorem\n");
		else
			std::cout << ("Triangle does not satisfy Pythagoras Theorem\n");
	}
	else{
		std::cout << ("Sides are not allowed\n");
	}
}
