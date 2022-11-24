#include <iostream>
#include <vector>
using namespace std;

int main() {
        int a1[] = {1,2,3,4,5};
        int a2[] = {10,20,30,40,50};
        int a3[] = {100,200,300,400,500};
        printf("address %p  %p  %p\n",a1,a2,a3 );
        std::vector<int*> v = {a1,a2,a3};

        //create iterator
        vector<int*>:: iterator itr;
        for(itr= v.begin(); itr!= v.end(); itr++) {
                int*temp = *itr;
                for(int i=0; i<5; i++)
                        cout << *(temp+i) << "\t";
                cout << endl;
        }
        cout << v.size() << endl;
        cout << v.capacity() << endl;
        

}
