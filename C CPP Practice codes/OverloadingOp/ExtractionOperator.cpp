#include <iostream>
using namespace std;

class Shop{
        int customerNo;
        std::string name;
        float bill;
        public:
                friend std::istream& operator>> (std::istream& in , Shop& ref);
                friend ostream& operator<<(ostream& out , Shop& ref);

};

std::istream& operator>>(std::istream& in , Shop& ref) {
        cout << "Enter customer no, name and bill: ";
        in >> ref.customerNo >> ref.name >> ref.bill;
        return in;
}
ostream& operator<<(ostream& out , Shop &ref) {
        out << ref.customerNo <<endl;
        out << ref.name << endl;
        out << ref.bill  << endl;
}


int main() {
        Shop customer1;
        cin  >> customer1;
        cout << customer1;
}
