/*
 *
Program 5: Write a Program that takes angles of a triangle from user and print
whether that triangle is valid or not.
{Note: Addition of angles of triangle has to be 180 in order to consider it as a
valid one}
Input: 30 60 70
Output: The triangle with angles 30 60 & 70 is a invalid one
*
*/


#include <iostream>

int main() {
	int s1,s2,s3;
	std::cout << "Enter three angles of the triangle: ";
	std::cin >> s1 >> s2 >> s3;

	if(s1+s2+s3 == 180) 
		std::cout << "The Triangle with angles " << s1 <<", " << s2 << "& " << s3 <<" is valid. " <<std::endl; 
	else
		std::cout << "The Triangle with angles " << s1 <<", " << s2 << "& " << s3 <<" is invalid. " <<std::endl; 
	return 0;
}
