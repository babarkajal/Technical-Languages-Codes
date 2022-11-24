//constant ref and variable non-constant


#include <iostream>

int main() {
	int i = 10;
	const int &ref = i; //the variable is only const for ref not for i 
	//ref ha fkt constant ahe i nahi 
	ref = 20;
	
	i = 20;	//ya line na error nhiye karan i la mhitich nhiye ki ref ne constant keley
	std::cout << ref;
}
 
