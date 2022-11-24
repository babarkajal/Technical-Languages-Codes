/*
Program 3: Write a Program that accepts a number from user and prints
Maximum element from that array.
Input: Length of Array: 6
Enter Elements in Array: 1 2 3 14 5 6
Output: Minimum Element Entered In That Array : 1
*/

#include <iostream>
#include<vector>


int main() {
	int len,data;
	std::cout << "Enter length of an array: ";
	std::cin >> len;
	
	//vector declaration 
	std::vector<int> v;

	std::cout << "Enter " << len << " elements in an array: "<< std::endl;
	for(int i=0; i<len; i++) {
		std::cin >> data;
		v.push_back(data);
	}

	std::vector<int>::iterator itr;
	
	int min = v.front();

	for(itr= v.begin(); itr!= v.end(); itr++) {
		std::cout << *itr << "  ";
		//if the element is greater than min 
		if(min > *itr) 
			min = *itr;
	}
	
	std::cout << "\n\nMinimum element from an array: "<< min << std::endl;

	
}
