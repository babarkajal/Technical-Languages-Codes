
//we create reference only to the varible not for the constant value

#include <iostream>

void addOne(int &y){
	y = y+1;
	
}

int main() {

		int x = 5;	
		std::cout <<"x= " << x << "\n";
		addOne(x++ + ++x); //5+7 =12  we cannot give ref to the value //error
		std::cout <<"x= " << x << "\n";
		
		return 0;
}
