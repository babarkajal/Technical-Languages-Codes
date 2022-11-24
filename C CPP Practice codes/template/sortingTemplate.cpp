#include <iostream>
using namespace std;

template <class T>
class Sorting {
        private:
        T* ptr = NULL;
        int size;
public:
        Sorting(T arr[],int size) {
                ptr = new T[size];                      //create array of type T and size
                this->size = size;

                //copy all elements
                for(int i=0; i<size;i++) {
                        *(ptr+i) = arr[i];
                }
        }

        void bubbleSort();
        void print();
};

template <typename T>
void Sorting<T> ::   bubbleSort() {
                //take temp element
                T temp;

                for(int i=0 ;i<this->size ; i++) {

                        for(int j=0; j<size-1-i; j++) {
                                if(ptr[j] > ptr[j+1]) {
                                        temp = ptr[j];
                                        ptr[j] = ptr[j+1];
                                        ptr[j+1] = temp;
                                }
                        }
                }
}

template <typename T>
void Sorting<T>::print() {
        for(int i=0; i<this->size; i++) {
                cout << *(ptr+i) << "\t";
        }
        cout << endl;
}


int main() {
        int arr[] = {8,2,5,3,9};
        float arr2[] = {6.5,2.3,4.6,1.3};
        Sorting<int> array(arr,5);
        cout << "array initial: ";
        array.print();

        array.bubbleSort();
        cout <<"After sorting : ";
        array.print();

        Sorting<float> array2(arr2,4);
        cout << "array initial: ";
        array2.print();

        array2.bubbleSort();
        cout <<"After sorting : ";
        array2.print();

}
