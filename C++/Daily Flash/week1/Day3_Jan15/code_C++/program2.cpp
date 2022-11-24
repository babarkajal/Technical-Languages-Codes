/*
 *
 Program 2: Write a Program to take a integer raging between 0 to 6 and print
corresponding weekday
Input: 2
Output: Wednesday.
*
*/

#include <iostream>


int main() {
	int  i;

	do {
		std::cout << "Enter integer(0-6): ";
		std::cin >> i;

		if(i < 0 || i > 6)
			std::cout << "Wrong input !! Try again " <<std::endl;
	}while(i <0 || i > 6);

	switch(i) {
		case 0:
			std::cout << "Monday" <<std::endl;
		        break;	
		case 1:
			std::cout << "Tuesday" <<std::endl;
		        break;	

		case 2:
			std::cout << "Wednesday" <<std::endl;
		        break;	
		case 3:
			std::cout << "Thursday" <<std::endl;
		        break;	
		case 4:
			std::cout << "Friday" <<std::endl;
		        break;	
		case 5:
			std::cout << "Saturday" <<std::endl;
		        break;	
		case 6:
			std::cout << "Sunday" <<std::endl;
		        break;	
				
	}


}
