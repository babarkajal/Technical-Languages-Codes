#include <iostream>
struct Bank {
	private:
		double bal;
		
	public:
		Bank() {
			std::cout << "In con" << std::endl;
		}
		
		Bank(float f,std::string name , long accNo , int loanAmt ) {
			
			std::cout << "In para con" << std::endl;
			this-> bal = f;
			this->name = name;
			this-> accNo = accNo;
			this->loanAmt = loanAmt;
		}
		Bank(Bank& ref) {
			
			std::cout << "In copy con" << std::endl;
		}

		std::string name = "Kajal";
		long accNo;
	protected:
		int loanAmt;
		  

};

struct accountHolder : public Bank{
		private:
			void fun() {
				std::cout << name << std::endl;
			}	

};

int main() {
	Bank o1;
	 Bank o2(10.23d , "kajal" , 1234567, 120000);
	o1 = o2;
	std::cout << o1.name << std::endl;
//	Bank o3 = Bank(o2);
	accountHolder obj;
	obj.fun();
}
