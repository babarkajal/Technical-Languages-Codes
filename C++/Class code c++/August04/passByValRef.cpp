//pass by value and reference

#include <iostream>

void fun(int ,int ,int& ,int&);

int main() {

	int x = 10;
	int y = 20;
	int add;
	int sub;
	fun(x,y,add, sub);
	std::cout << "addition = " << add << std::endl;
	std::cout << "substraction = " << sub << std::endl;
}

void fun(int x , int y ,int &add, int &sub){


	add = x+y;
	sub = x-y;
}
