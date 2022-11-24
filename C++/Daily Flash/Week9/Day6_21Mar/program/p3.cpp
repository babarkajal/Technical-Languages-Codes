/*
 * Program 3: Write a Program that accepts a number from user and prints sum &
average of elements from that array.
Input: Length of Array: 6
Enter Elements in Array: 1 2 3 4 5 6
Output:
Sum of Elements of Array: 21
Average of Elements from Array: 3.5
 */ 

#include <iostream>

int main() {
	int n,sum=0;
	float avg;
	//take an array
	int array[20];
	std::cout << "Enter no elements in array: ";
	std::cin >> n;

	//accept elements in an array and make addition
	std::cout << "Enter "<< n << " elements: "<<std::endl;
	for(int i=0; i<n; i++) {
		std::cin >> *(array+i); 
		sum+=*(array+i);
	}
	avg = sum / n;


	std::cout <<"Sum of elements or an array" <<sum <<std::endl;
	std::cout <<"Average of elements of an array : "<< avg<<std::endl;
}

