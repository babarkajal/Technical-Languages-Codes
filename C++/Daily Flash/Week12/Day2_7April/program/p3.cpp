/*
 * Program 3: Write a Program that accepts 2D Array of M Rows & N Columns
from user and prints only diagonal elements from that array
Input: Enter Number of rows & cols : 3 3
Elements : 1 2 3
3 4 5
5 6 7
Output: Diagonal Elements from that array are : 1 4 7
*/

#include <iostream>


int main() {
	int m,n;
	std::cout << "Enter 2D array" <<std::endl;
	std::cout << "enter rows: ";	
	std::cin >> m;
	std::cout << "enter column: ";	
	std::cin >> n;
	int arr[m][n];
	
	//enter elements in an array
	std::cout <<"Enter elements in an 2D array: "<<std::endl;
	for(int i=0; i<m; i++) {
		for (int j=0; j<n;j++) {
			std::cin >> arr[i][j];
		}

	}
	std::cout << "Array \n";
	for(int i=0; i<m; i++) {
		for (int j=0; j<n;j++) {
			std::cout << arr[i][j] << "\t";
		}
		std::cout << "\n";
	}
	std::cout << "Diagonal elements: ";
	for(int i=0; i<m; i++) {
		for (int j=0; j<n;j++) {
			if(i==j)
				std::cout <<arr[i][j] << "\t";
		}
		std::cout << "\n";
	}

}	
