#include <iostream>
using namespace std;

class Friend1 {
                int noOfPens = 10;
                public:
                        void display() {
                                cout << "No of pens " << noOfPens << std::endl;
                        }
                        friend class Friend2;
};


class Friend2 {

                public:
                void display(Friend1& ref) {
                        cout << "NoOfpens " << ref.noOfPens << std::endl;
                        //call display method
                        ref.display();
                }
                void Operator=(Friend2& ref1 , Friend1& ref2) {
                        cout << "Hello" << endl;
                }
};

int main() {
        Friend1 f;
        Friend2 f3;
        f3 = f;
        f3.display();
        Friend2 f2;
        f2.display(f);
}
