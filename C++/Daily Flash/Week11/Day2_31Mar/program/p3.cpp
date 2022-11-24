/*
Program 3: Write a Program that accepts an Array on Length N from user and
calculates squares of all even elements and cubes of all odd elements from
that array and replaces the elements respectively with the answer
Input: Length of Array: 6
Enter Elements in Array: 1 2 3 4 5 6
Output: Array after operation: 1 4 27 16 125 36
*/


#include <iostream>
#include <vector>

int main() {
	int N,data;
	std::cout << "enter N for array: ";
	std::cin >> N;

	//create vector
	std::vector<int> v;

	std::cout << "Entr " << N << " Elemenets in an array: ";
	for(int i=0; i<N ;i++) {
		std::cin >> data;
		v.push_back(data);	
	}

	//create iterator
	std::vector<int>::iterator itr;
	//some operations 
	for(itr =v.begin() ; itr!= v.end() ; itr++) {

			//if element is even then add square
			if (*itr%2 ==0){
				*itr = *itr * *itr;
			}
			else 
				*itr = *itr * *itr * *itr;
	}

	//print
	std::cout << "Array elements after operations: ";
	for(itr =v.begin() ; itr!= v.end() ; itr++) {
		std::cout << *itr << "\t";
	std::cout << std::endl;
	}
}
