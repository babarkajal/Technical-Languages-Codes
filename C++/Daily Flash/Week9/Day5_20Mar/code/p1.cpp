/*
 Program 1: Write a Program that print multiplication of Series up to nth length
if user provides length.
Series: 1 ^1 * 2^2 * 3^3 * ... * n*n
Input: Enter Length of Series: 3
Output: The multiplication of Series of length 3 = 108
 */

#include<iostream>
#include <math.h>

class Demo {
	private:
	       	int num;
	public:
		Demo(int num) {
			this->num = num;
		}

		int multiplicationOfSeries(int num);

};
int Demo:: multiplicationOfSeries(int num) {
	int mult = 1,value =1;

	//series upto num
	while(value<=num) {
			mult = mult * pow(value,value);
			value+=1;
	}
	
	return mult;
}



int main() {

	int N;
	std::cout << "Enter limit for series: ";
	std::cin >> N;

	Demo *d = new Demo(N);
	int multValue = d->multiplicationOfSeries(N);
	std::cout << "Multiplication of series: " <<multValue << std::endl;
	return 0;
}
