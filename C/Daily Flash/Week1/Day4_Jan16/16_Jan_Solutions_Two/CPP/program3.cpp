
#include <iostream>

int main() {
	int c;

	std::cout <<("Enter Year  : ");
	std::cin >> c;
	
	if(c > 0 && c % 400 == 0 && c % 100 == 0){
		std::cout <<("Leap Year\n");
	}
	else if (c > 0 && c % 4 == 0 && c % 100 != 0){
		std::cout <<("Leap Year\n");
	}
	else if(c <= 0){
		std::cout <<("not Valid Entry For Year\n");
	}
	else {
		std::cout <<("Not Leap Year\n");
	}
}
