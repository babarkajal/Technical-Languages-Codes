
/*
 *
 program 3: Write a Program to check if a year is leap year or not.
{Note: If a year is divisible by 4 then it is leap year but if the year is century
year like 2000, 1900, 2100 then it must be divisible by 400}
*
*/

#include <iostream>

int main() {
	int year;
	std::cout << "Enter year: " <<std::endl;
	std::cin >> year;

	if(year % 4==0 )
	       std::cout << "Leap year!!!" << std::endl;

	else if(year%400==0 && year %100 == 0)
	       std::cout << "Leap year!!!" << std::endl;
	else
	       std::cout << "Not Leap year!!!" <<std::endl;
}
