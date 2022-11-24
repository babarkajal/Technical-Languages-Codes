/*
 * Program 5: Write a Program that accepts N numbers from user and calculates
Variance of those numbers.
{Steps: we can calculate Average of numbers using following formula.
Variance (v) = ∑(x-a)^2 / n
Where,
X are numbers entered,
A is average of those numbers
n is count of those numbers
}
Input:
Enter Value N: 3
Enter Values: 1 5 2
Output:
Average (a) of Numbers = 1.5
Variance of Numbers: 2.89
*/

#include <iostream>
#include<math.h>

int main() {

	int N;
	std::cout << "Enter num of integers: ";
	std::cin >> N;
	int array[20];
	int sum=0;
	std::cout <<"Enter "<< N << "integers: ";
	for (int i=0; i<N; i++) {
		std::cin >> *(array+i);
		sum =sum + *(array+i);
	}

	float avg =sum /N;
	int den = 0;
	for(int i=0; i<N ;i++) {
		den = den + pow( (*(array+i)-avg),2);
	}
	
	float var = den/N;


        std::cout << "Average of num: " << avg<<std::endl;
	std::cout << "Variance of element: "<<var<<std::endl;
}

