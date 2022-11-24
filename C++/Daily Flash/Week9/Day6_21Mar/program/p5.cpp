/*
 Program 5: Write a Program that accepts N numbers from user and calculates
Variance of those numbers.
{Steps: we can calculate Standard Deviation using following formula.
Standard Deviation (s) = √v
Where,
V is Variance of those numbers.
}
Input:
Enter Value N: 3
Enter Values: 1 5 2
Output:
Average (a) of Numbers = 1.5
Variance of Numbers: 2.89
Standard Deviation of Numbers: 1.7
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
	float std_dev = sqrt(var);

        std::cout << "Average of num: " << avg<<std::endl;
	std::cout << "Variance of elements: "<<var<<std::endl;
	std::cout << "Standard deviation of elements: "<<std_dev<<std::endl;
}

