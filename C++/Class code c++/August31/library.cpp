
//class inside a class
//In cpp inner classes are always static so can be called by using scope resolution

#include <iostream>
#include <string.h>

class library {

	public:
		class book {

			int nPages;
			char aName[30];
			public:
				book(int nPag,const char str[20]){
					std::cout << "Book " <<std::endl;
					nPages = nPag;
					strcpy(aName,str);
				}

		
			void display(){
	
				std::cout << nPages << std::endl;
				std::cout << aName << std::endl;
			}
		};
			
		library(int a, int b){
			noOfWorkers = a;
			tableNo = b;
			
		}

		int tableNo;
		int noOfWorkers;
		
};

int main() {

	library l(21,12);
	library::book b(549,"Nageshwar Rao");
	b.display();
	return 0;

}
