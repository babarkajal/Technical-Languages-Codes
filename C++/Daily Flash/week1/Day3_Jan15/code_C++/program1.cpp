/*
 *
Program 1: Write a Program to check whether the Character is Uppercase or Lowercase Character.
Input: v
Output: letter v is in lowercase
*
*/

#include <iostream>

int main() {
	char c;
	std::cout << "Enter Character: ";
	std::cin >> c;
	
	if( (c >=97 && c<=122) || (c >=65 && c <=90) ) {
			
			if(c >=97 && c<=122)
				std::cout << "letter " << c  << " is in lower case" <<std::endl;
			else
				std::cout << "letter " << c  << " is in upper case" <<std::endl;
	}
	else  
			std::cout << "letter " << c  << " is not an alphabet" <<std::endl;
}




