/*
 * Program 1: Write a Program to take all three sides of a triangle from user and
check whether the triangle satisfies the Pythagorean Theorem.
Input:
Side 1 = 3
Side 2 = 4
Hypotenuse = 5
Output: Triangle Satisfies the Pythagorean Theorem.
*
*/

#include <iostream>

int main() {
	int s1,s2,hypo;

	std::cout << "Enter Three sides of triangle: \n" << std::endl;
	//enter sides
	std::cout << "Enter side 1: " << std::endl;
	std::cin >> s1;
	std::cout << "Enter side 2: " << std::endl;
	std::cin >> s2;
	
	//enter hypotenuse
	std::cout << "Enter hypotenuse: " << std::endl;
	std::cin >> hypo;
		
	int c =  (hypo*hypo == (s1*s1 + s2*s2) ) ? 1 : 0 ;

	if(c) 
		std::cout <<"Triangle satisfies the Pythangorean Theorem" <<std::endl ;
	else
		std::cout <<"Triangle not satisfies the Pythangorean Theorem" <<std::endl ;
	return 0;
}

