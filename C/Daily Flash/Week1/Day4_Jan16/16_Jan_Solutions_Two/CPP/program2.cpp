#include <iostream>

main() {
	float a, c;
	float b;

	std::cout << ("Enter Principal Amount : ");
	std::cin >> a;
	
	std::cout << ("Enter Rate of Interest : ");
	std::cin >> b;
	
	std::cout << ("Enter Number of Years : ");
	std::cin >> c;

	if(a > 0 && b > 0 && c > 0 && b <= 100){
		std::cout << ("Simple Interest : ") << (a * b * c)/100 << std::endl;

	}
	else{
		std::cout <<("Values are wrong\n");
	}
}
