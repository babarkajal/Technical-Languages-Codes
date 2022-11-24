/*
 
 */
#include <iostream>
int main() {
	int row;
	std::cout << "Enter rows: "<<std::endl;
	std::cin >>row;
	int num=1;
	for(int i=0; i<row; i++) {
		for (int j=0; j < row*2-i-1; j++) {
				if( j >= i) {
					if(i%2==0){ 
						std::cout << num << "  " ;
						num++;
					}
					else{
						num--;
						std::cout << num<< "  ";
					}
				}
				else {
					std::cout << "   ";
				}
		}
		std::cout <<std::endl;
	}	
}
