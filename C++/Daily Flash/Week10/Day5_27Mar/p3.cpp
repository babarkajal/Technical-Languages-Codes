/*
 * Program 3: Write a Program that accepts a Array on Length N from user and
prints square of every odd elements from that array.
Input: Length of Array: 6
Enter Elements in Array: 1 2 3 4 5 6
Output: Square of Odd Elements from that array : 1 9 25
*
*/


#include <iostream>
#include <vector>


int main() {
	int n,value;
	std::cout << "Enter length of array: ";
	std::cin >> n;

	//create vector of int 
	std::vector<int> v;

	//accpet elements in the vector
	std::cout << "Enter "<< n << " integers: ";
	for(int i=0; i<n; i ++) {
		std::cin >> value;
		v.push_back(value);
	}

	//iterator
	std::vector<int>::iterator itr;
	std::cout << "Squares ot the odd elements in an array: ";
	for(itr=v.begin(); itr!=v.end(); itr++) {
		if(*itr %2!=0)
			std::cout << (*itr) * (*itr) << "\t";
	}
	std::cout << std::endl;
}


