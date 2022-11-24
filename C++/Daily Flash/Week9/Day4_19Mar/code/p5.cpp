/*
Program 5: Write a Program that accepts N numbers from user and calculates
Average of those numbers.
{Steps: we can calculate Average of numbers using following formula.
Average (a) = sumOfNumbers / countOfNumbers
}
Input:
Enter Value N: 5
Enter Values: 1 2 4 5 6
Output: Average (a) of Numbers = 3.6
*/

#include <iostream>

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
        std::cout << "Average of num: " << avg<<std::endl;	
}
