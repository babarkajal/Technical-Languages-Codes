/*
 Enter rows: 
4
0   1   2   3   4   5   6   
    2   3   4   5   6   
        4   5   6   
            6
 */
#include <iostream>
int main() {
	int row;
	std::cout << "Enter rows: "<<std::endl;
	std::cin >>row;

	for(int i=0; i<row; i++) {
		for (int j=0; j < row*2-i-1; j++) {
				if( j >= i) {
						std::cout << i+j << "   ";

				}
				else {
					std::cout << "    ";
				}
		}
		std::cout <<std::endl;
	}
}
