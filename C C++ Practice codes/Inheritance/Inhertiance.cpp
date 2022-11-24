#include <iostream>
using namespace std;


class Super {
                int x = 20;                             //4
        public:
                Super() {
                        cout << "Super " <<endl;
                }
                        virtual void display() {
                                cout << "In super display " << endl;
                        }
};

class  child: public Super{
                int y = 30;                             //4 + 4+8
        public:
                        child() {
                                cout << "Child " <<endl;
                        }
                        void display() {
                                        cout << "In child display " <<endl;
                        }
};
int main() {
        child c;
        Super &s1 = c;
        Super *s2 = new child();
        c.display();
        s1.display();
        s2->display();
        cout << sizeof(s1) << endl;
}
