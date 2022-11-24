/*
Enter rows: 
4
A0   B1   C2   D3   E4   F5   G6   
     H2   I3   J4   K5   L6   
          M4   N5   O6   
               P6   
 
 */
#include <iostream>
int main() {
	int row;
	std::cout << "Enter rows: "<<std::endl;
	std::cin >>row;
	char ch='A';

	for(int i=0; i<row; i++) {
		for (int j=0; j < row*2-i-1; j++) {
				if( j >= i) {
						std::cout << ch<< i+j << "   ";
						ch++;
					
				}
				else {
					std::cout << "     ";
				}
		}
		std::cout <<std::endl;
	}	
}
