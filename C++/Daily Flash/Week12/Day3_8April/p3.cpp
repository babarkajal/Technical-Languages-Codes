/*
Program 3: Write a Program that accepts 2D Array of M Rows & N Columns
from user and prints only addition of even elements multiplied by max odd
element from that array.
Input: Enter Number of rows & cols: 3 3
Elements:
1 2 3
3 4 5
5 6 7
Output: Sum of Even Elements: 12
Max Odd Element: 7
Expected Output: 12 * 7 = 84
*/



#include <iostream>


int main() {
	int m,n,max,sum=0;
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
	max = *(*(arr+0)+0);
	std::cout << "Array \n";
	for(int i=0; i<m; i++) {
		for (int j=0; j<n;j++) {
			std::cout << arr[i][j] << "\t";

			if(arr[i][j]%2==0) {
				sum +=arr[i][j];
			}
			else if(arr[i][j] > max) {
					max = arr[i][j];
			}
		}
		std::cout << "\n";
	}
	std::cout << "Sum of even elemnts: "<<sum <<std::endl;
	std::cout << "maximum odd num: "<< max << std::endl;
	std::cout << "operation "<< sum << '*' << max << "=" << sum*max << std::endl;
}
