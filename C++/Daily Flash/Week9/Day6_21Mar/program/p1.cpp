/*
 * Program 1: Write a Program that print Addition of Series up to nth length if
user provides length.
Series: 1^1*0 + 2^2*1 + 3^3*2 + ... + n^n*n-1
Input: Enter Length of Series: 3
Output: The addition of Series of length 3 = 734
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

		int addOfSeries(int num);

};

int Demo:: addOfSeries(int num) {
	int add = 0,value =1, mult = 0;

	//series upto num
	while(value<=num) {
			add = add + pow(value,(value*mult ));
			value+=1;
			mult  +=1;
	}
	return add;
}

int main() {

	int N;
	std::cout << "Enter limit for series: ";
	std::cin >> N;

	Demo *d = new Demo(N);
	int addValue = d->addOfSeries(N);
	std::cout << "Addition of series: " <<addValue << std::endl;
	return 0;
}

