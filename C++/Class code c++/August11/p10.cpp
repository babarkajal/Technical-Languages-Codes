

//intilization of member varibles

#include <iostream>


class Dmart {

//	public:
	int noOfItems;
	std::string typeOfTrans;
	float total;
	long mobNo;

	public:
		void displayData() {
			
			std::cout << "No of items = "<< noOfItems << std::endl;
			std::cout << "typeOfTrans = "<< typeOfTrans << std::endl;
			std::cout << "total = "<< total << std::endl;
			std::cout << "mobNo = "<< mobNo << std::endl;
		}

};




int main() {

	//private members can not be intilization like this for this member varibles should be public
	Dmart D1 = {10,"cash",560.00f,123456789};
	D1.displayData();

}

 
