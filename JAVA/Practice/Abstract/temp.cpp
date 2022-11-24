#include <iostream>
using namespace std;
class A {
public:
        void calculate() {
                cout << "hello"<<endl;
        }
};

class X: public A {
public:
        //in cpp return type does not matter
        int calculate() {
                cout << "Hi" << endl;
        }
};

int main() {
        X x;
        x.calculate();
}
