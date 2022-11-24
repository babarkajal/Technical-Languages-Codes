
/*
 * Program 5: Write a Program to take marks of five subjects Physics, Chemistry,
Biology, Mathematics and Computer. Calculate percentage and grade
according to following:
Percentage >= 90% : Grade A
Percentage >= 80% : Grade B
Percentage >= 70% : Grade C
Percentage >= 60% : Grade D
Percentage >= 40% : Grade E
Percentage < 40% : Grade F
*
*/

#include <iostream>

int main() {
	//to take marks
	int marks[5];
	int sum =0;
	float per;

	std::cout << "Enter marks of 5 subject(Out of 100): " << std::endl;
	for(int i=0 ;i<5; i++) {
		std::cin >> marks[i];
		sum += marks[i];
	}
	per = sum / 500.00 *100;


	if(per >= 90)
		std::cout << "Percentage " << per << " Grade A" << std::endl;
	
	else if(per >=80 )
		std::cout << "Percentage "<< per << " Grade B" << std::endl;

	else if(per >=70 )
		std::cout << "Percentage "<< per << " Grade C" << std::endl;

	else if(per >=60 )
		std::cout << "Percentage "<< per << " Grade D" << std::endl;

	else if(per >=40 )
		std::cout << "Percentage "<< per << " Grade E" << std::endl;

	else
		std::cout << "Percentage "<< per << " Grade F" << std::endl;

	return 0;
}
