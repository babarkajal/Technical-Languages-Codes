#include <iostream>
//error
//register int k;
int main() {

	register int  i=10;
	std::cout << i << std::endl;
	std::cout << &i << std::endl;
	
	return 0;

}
