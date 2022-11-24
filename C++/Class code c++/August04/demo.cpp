// problem when passing by reference


#include <iostream>

void fun(const int &i) {
	
	std::cout << i <<std::endl;
}


int main() {
	int x =10;	
	int &y = ++x;	//++x ha return kartana na variable x ch return karto mg apan variable la reference lavu shakto 
	
	//int &z = x++;	//hi line chukichi ahe karan eth x++ ha return value karto ani value la kevhach ref use karta yet nhi without use of const
	/*
	demo.cpp:16:12: error: cannot bind non-const lvalue reference of type ‘int&’ to an rvalue of type ‘int’
  	int &z = x++; //hi line chukichi ahe karan eth x++ ha return value karto ani value la kevhach ref use karta yet nhi
           ~^~
	*/
	
	//ethe sangty ki const and not-const ch binding hovu shakt nhiye karan kontihi literal value hi constant consider keli jate mg variable pn 
	//const pahije na 
	
	const int &z = 100; 		//this will work
	std::cout << y <<std::endl;
	std::cout << z << std::endl;
	fun(x);
}
