
#include <iostream>

int main() {

	float phy, chem, bio, math, comp;

	std::cout <<("Enter Marks for phy chem ,bio, math, comp out of 100: \n");
	std::cin >> phy >> chem >> bio >> math >> comp;

	if(phy < 0 || chem < 0 || bio < 0 || math < 0 || comp < 0 ||
			phy > 100 || chem > 100 || bio > 100 || math > 100 || comp > 100 ){
		
		std::cout <<("marks entered negative or greater than 100\n");
		exit(0);
	}
	
	float per = (phy + chem + math + bio + comp) / 5;
	std::cout <<("Percentage : ") << per << std::endl;

	if(per >= 90){
		std::cout <<("Grade A\n");
	}
	else if(per >= 80){
		std::cout <<("Grade B\n");
	}
	else if(per >= 70){
		std::cout <<("Grade C\n");
	}
	else if(per >= 60){
		std::cout <<("Grade D\n");
	}
	else if(per >= 40){
		std::cout <<("Grade E\n");
	}
	else {
		std::cout <<("Grade F\n");
	}

	
}
