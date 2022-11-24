/*
Program 1: Write a Program that print multiplication of Series up to nth length
if user provides length.
Series: (1) + (1+2) * (1+2+3) * ... * (1+2+3+4+...+n).
Input: Enter Length of Series: 4
Output: The multiplication of Series of length 4 = 20
*/

#include <iostream>

class Demo {
	private:
		int num;
	public:
		//con
		Demo(int num) {
			this->num = num;
		}
		
	      int mult() {
		int mult_of_series=1;
		int add = 0;
		int value= 1;
		while( value<=num) {
			add +=value;
			mult_of_series = mult_of_series*add;
			value++;
		}	
		return mult_of_series;
		}
};//end of series


int main() {
	int N;
	std::cout << "Enter limit for series: ";
	std::cin >> N;
	Demo d(N);
	int multValue = d.mult();
	std::cout << "Multiplication of series " << multValue << std::endl;
}
