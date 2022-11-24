/*
 *
Program 3: Write a Program to take number of month and print the number of days in that month.
Input: 4
Output: April is a 30 days’ month.
*
*/

#include <iostream>


int main() {
	int  i;

	do {
		std::cout << "Enter number of month(1-12): ";
		std::cin >> i;

		if(i < 1 || i > 12)
			std::cout << "Wrong input !! Try again " <<std::endl;
	}while(i < 1 || i > 12);

	switch(i) {
		case 1:
			std::cout << "January is a 31 days' month" <<std::endl;
		        break;	
		case 2:
			std::cout << "February is a 28/29 days' month" <<std::endl;
		        break;	

		case 3:
			std::cout << "March is a 31 days' month" <<std::endl;
		        break;	
		case 4:
			std::cout << "April is a 30 days' month" <<std::endl;
		        break;	
		case 5:
			std::cout << "may is a 31 days' month" <<std::endl;
		        break;	
		case 6:
			std::cout << "June is a 30 days' month" <<std::endl;
		        break;	
		case 7:
			std::cout << "July is a 31 days' month" <<std::endl;
		        break;	
		case 8:
			std::cout << "August is a 31 days' month" <<std::endl;
		        break;	
		case 9:
			std::cout << "September is a 30 days' month" <<std::endl;
		        break;	
		case 10:
			std::cout << "October is a 31 days' month" <<std::endl;
		        break;	
		case 11:
			std::cout << "November is a 30 days' month" <<std::endl;
		        break;	
		case 12:
			std::cout << "December is a 31 days' month" <<std::endl;
		        break;	
				
	}


}
