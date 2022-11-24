#include <iostream>
#include <vector>
using namespace std;

ostream& operator<< (ostream& ref , vector<int> v) {
        ref << "hello";
        return ref;
}
int main() {
        string s = "kajal";
        vector <int> v;
        for(int i=0; i<4; i++) {
                v.push_back(i);
        }

        //create a iterator
        vector<int>::iterator itr;
        cout << "Values are: ";
        for(auto itr=v.begin() ; itr!=v.end(); itr++) {
                cout << *itr << endl;
                *itr = 10;
        }
        cout << "size and capacity " << v.size() << "\t" << v.capacity() << endl;

}
