#include <iostream>
using namespace std;

class Demo {
        int x =20;
        public:
                void fun(Demo& ref) const{
                        //cout << ++x << endl;
                        //cout << ++a << endl;
                        cout << this << endl;
                        *this = ref;
                        cout << this << endl;
                }
};

int main() {
        Demo d;
        d.fun(d);
}
