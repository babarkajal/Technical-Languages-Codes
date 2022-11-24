
#include <iostream>

int main() {
	int num1,num2;
	std::cout << "Enetr range for printing odd num------------\n";
	std::cout << "Enter num1: ";
	std::cin >> num1;
	
	std::cout << "Enter num2: ";
	std::cin >> num2;

	while(num2< num1) {
		std::cout <<"Num2 should be greater than num1 \nEnter num2 again : ";
		std::cin >> num2;
	}
	for(int i=num1; i<=num2; i++){
		if(i%2!=0)
			std::cout << i << " ";
	}

	std::cout << std::endl;
        return 0;
}

