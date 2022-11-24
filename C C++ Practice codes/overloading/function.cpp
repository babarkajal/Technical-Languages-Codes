#include <iostream>
using namespace std;


class Super {
                int x = 20;                             //4
        public:
                Super() {
                        cout << "Super " <<endl;
                }
                void display() {
                        cout << "In super display " << endl;
                }
                void display(float a) {
                        cout << "In float display" << endl;
                }
};


class  child: public Super{
                int y = 30;                             //4 + 4+8
        public:
                child() {
                                cout << "Child " <<endl;
                }
                void display(int a) {
                                cout << "In child display " <<endl;
                }
                int display() {
                                cout << "In int display()" << endl;
                }

};

int main() {
        child c;
        c.display(20.3);
}
