/*
 * Program 3: Write a Program that accepts a number from user and swaps that
first element from that array with last element of that array.
Input: Length of Array: 6
Enter Elements in Array: 1 2 3 4 5 6
Output: Array Before Swapping: 1 2 3 4 5 6
Array After Swapping : 6 2 3 4 5 1
*/


#include <iostream>
#include<algorithm>
#include <vector>

int main() {
	int len,data;
	std::cout << "Enter lenght of an array: ";
	std::cin >> len;

	//vector 
	std::vector<int> v;

	std::cout << "Enter " << len << " elements: ";
	for(int i =0; i<len; i++) {
		std::cin >> data;
		v.push_back(data);
	}
	
	std::vector<int>::iterator itr;
	std::cout <<" Array Before Swapping: ";
	for(itr= v.begin(); itr!=v.end(); itr++) 
		std::cout << *itr << "\t";
	std::cout << std::endl;
	
	std::reverse(v.begin(),v.end());

	std::cout <<" Array after Swapping: ";
	for(itr= v.begin(); itr!=v.end(); itr++) 
		std::cout << *itr << "\t";
	std::cout << std::endl;
}


