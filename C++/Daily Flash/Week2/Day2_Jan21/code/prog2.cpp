/*
*
* Program 2 : Write a Program t o print cu be of first 20 numbers .
Output:
Cube of 1: 1
Cube of 2: 8
Cube of 3: 27
.
.
.
Cube of 20: 8000
*/

#include <iostream>


int main() {
	
	// print cube 
	for(int i =1;i<=20 ;i++)
		std::cout << "Cube of " << i << ": " << i*i*i << std::endl;
	return 0;	

}
