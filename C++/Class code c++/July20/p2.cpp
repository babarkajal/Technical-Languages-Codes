

#include<iostream>
//we can not print the object of class

class Book{

	int a,b;
	
};

int main() {

	Book obj;
	std::cout << obj;//error no match for operator <<
	return 0;

}
