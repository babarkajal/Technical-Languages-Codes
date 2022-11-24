#include <iostream>
using namespace std;


class Super {
                int x = 20;                             //4
        public:
                Super() {
                        cout << "Super " <<endl;
                }
                virtual void display(float x){
                                cout << "In super display " << endl;
                                cout << x << endl;
                }
};

class  child: public Super{
                int y = 30;                             //4 + 4+8
        public:
                        child() {
                                cout << "Child " <<endl;
                        }
                        void display(int x){
                                        cout << "In child display " <<endl;
                                        cout << x << endl;
                        }
                        void display(float x) {
                                        cout << "In child display " <<endl;
                                        cout << x << endl;
                        }
};


int main() {
        child c;
        Super &s1 = c;
        Super *s2 = new child();
        c.display(20);
        c.display(30.5f);
        s1.display(10);
        s2->display(10.5);
        cout << sizeof(s1) << endl;
}
