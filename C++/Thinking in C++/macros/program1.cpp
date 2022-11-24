
#include <iostream>
#define print(EX) std::cout << #EX[0] << ":" << EX <<std::endl;		//stringizing

//here EX is a character array #EX will give entire name 


int main() {

	int xyz =10;
	int NDEBUG =20;
	print(xyz);
	return 0;
}
