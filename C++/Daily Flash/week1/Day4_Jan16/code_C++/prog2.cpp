/*
 * Program 2: Write a Program to calculate Simple Interest. Taking all essential
terms to compute as input.
*
*/

#include <iostream>

int main() {
	//take primary ammount and year
	int priAmt,year;

	//take interest rate
	float rate;


	std::cout <<"Enter the primary ammount: " << std::endl;
	std::cin >> priAmt;

	std::cout << "Enter the interest rate(peercentage): " <<std::endl;
	std::cin >> rate;

	std::cout << "Enter the year: " << std::endl;
	std::cin >> year;

	float simpleInterest = priAmt*year* (rate / 100);
	std::cout << "Simple interest = "<< simpleInterest << std::endl;
	return 0;
}
