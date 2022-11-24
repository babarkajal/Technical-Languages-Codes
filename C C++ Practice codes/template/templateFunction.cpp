#include <iostream>
using namespace std;

template <typename t, typename q >
q maxi(t x, q y) {
        return x>y?x:y;
}

int main() {
        int x,y;
        cout << "Enter x and y: ";
        cin >> x >> y;

        cout << "maximum " << maxi(x,y) << endl;
        float p,q;
        cout << "Enter p and q: ";
        cin >> p >> q;

        cout << "maximum " << maxi( p,2.5) << endl;
}
