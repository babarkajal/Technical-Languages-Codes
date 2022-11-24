#include <iostream>


//we can not return a value from the fun return type void
//error:return statement with a value,in function returning  void
void fun(int,...) {

	std::cout << "Inside the fun\n";
	return 19;
}
int main() {

	fun(10,'K');
	//std::cout << i <<std::endl;
	std::cout <<"After the fun\n";

}
