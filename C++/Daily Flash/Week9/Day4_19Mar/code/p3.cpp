/*
 * Program 3: Write a Program that accepts a number from user and stores every
digit from that number into an array.
Input: 3462
Output: Number Stored In Array: 3 4 6 2
*/



#include <iostream>

int main() {
	int num;
	std::cout << "Enter integer: ";
	std::cin >> num;
	//take an array
	int array[20];
	int index=0;
	
	for(; num; num/=10) 
		array[index++] = num%10;

	//reverse that array
	int temp;
	for(int i = 0;i <= index/2; i++ ) {
		temp = array[i];
		array[i] = array[index-1-i];
		array[index-1-i] = temp;	
	}

	std::cout << "Num stored in array: ";
	for(int i=0; i<index;i++) {
		std::cout << array[i] << "  ";
	}
	std::cout << std::endl;	
}
