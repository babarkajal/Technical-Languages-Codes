#include <iostream>

int main() {
	int row;
	std::cout << "Enter row num: ";
	std::cin >> row;
	int var = 65;
	
	for(int i=0; i<row; i++){
		
		for(int j=0; j<=i; j++) { 
			if(i%2!=0)
				std::cout << (char)var << " ";
			else
			        std::cout << (char)(var+32) << " ";
		}
			std::cout << std::endl;
	}
        return 0;

}
