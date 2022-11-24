#include <iostream>
using namespace std;
class CarLoan;
class HomeLoan {
        int loanAmt = 20000;
        public:
                int accNum;

                void display() {
                        cout << "LoanAmt " << loanAmt <<endl;
                        cout << "accNum " << accNum <<endl;
                }
                friend void operator+(HomeLoan&, CarLoan&);

};

class CarLoan{
        int loanAmt = 100000;
        public:
                int accNum;

                void display() {
                        cout << "LoanAmt " << loanAmt <<endl;
                        cout << "accNum " << accNum <<endl;
                }
                friend void operator+(HomeLoan&, CarLoan&);
};

//using friend function
void operator+(HomeLoan& h, CarLoan& c) {
        cout << h.loanAmt << "+" << c.loanAmt << "= " << h.loanAmt + c.loanAmt << endl;
}

/*using normal function
void operator+(HomeLoan h , CarLoan ref) {
        std::cout << "Hello\n";
        std::cout <<  h.loanAmt << ref.loanAmt;
}*/

int main() {
        HomeLoan h;
        CarLoan C;
        h+C;
        //now I want to add my total loan

}
