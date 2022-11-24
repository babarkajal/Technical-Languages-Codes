
/*
 Program 1: Write a Program that print Addition of Series up to nth length if
user provides length.
Series: 0 + π/6 + π/6 + π/2 + ... + 2 π.
(where π = 3.142)
Input: Enter Length of Series: 3
Output: The addition of Series of length 3 = 1.52
*/


#include <iostream>
#define PI 3.142

int main() {
	int len;
	std::cout << "Enter length of the series: ";
	std::cin >> len;
	float mult[] = {0, 0.1667 , 0.333 , 0.5 ,1.5,1};

	float add = 0;
	int values= 0;
	while (values < len) {
		add = add +  (PI * mult[values]);
		values += 1;
		
	}	
	std::cout << "Addition of the series: " << add << std::endl;
	
}
