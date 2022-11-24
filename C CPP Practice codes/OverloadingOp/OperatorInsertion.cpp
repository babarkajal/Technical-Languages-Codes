#include <iostream>
using namespace std;

class X {
        int p = 10, q= 20;

        public:
                friend std::ostream& operator<<(std::ostream& out , X & ref);

};

std::ostream& operator<<(std::ostream& out , X & ref) {
        out << ref.p << ref.q << endl;
}


int main() {
        X x;
        cout << x ;
}
