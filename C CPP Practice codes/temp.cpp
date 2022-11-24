#include <iostream>
using namespace std;
class Demo {
        int a=10;
public:
        void display() {
                std::cout << "a = " << a<< std::endl;
        }
};

int main() {
        Demo* d = new Demo();
        Demo* d2 = d;
        d->display();
        d2->display();
        cout << d << "  " << d2 <<endl;
        free( d2);                              //just clears the memory by clearing the data members
        cout << d << "  " << d2 <<endl;
        d->display();
        d2->display();
}
