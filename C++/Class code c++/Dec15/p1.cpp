#include<iostream>

const int size =3;

template <class T>
class Vector {
	T *v;
	public:
		Vector() {
		v = new T[size];
			std::cout << &v <<std::endl; 	
			for(int i=0; i<3; i++){
				std::cout << "i= " << i << std::endl;
				v[i]=0;
			}
		}
		Vector(T *a) {
	//	v = new T[size];
			std::cout << &v <<std::endl; 	
			std::cout << "In con\n"	;
			for(int i=0; i<size; i++) {
				std::cout << "*i = " << i <<std::endl;
				v[i]=a[i];
				std::cout << "*(a+i) = " << *(a+i) <<std::endl;
				std::cout << "*(v+i) = " << *(v+i) <<std::endl;
			}
		}
		
		T operator * (Vector &y) {
			T sum = 0;
			for(int i =0; i<size ; i++) {
				std::cout << "op i = " << i << std::endl;
				sum += this->v[i] * y.v[i];	
			}
			return sum;
		}
};

int main() {
	float x[3]={1.1,2.2,3.3};
	float y[3]={4.4,5.5,6.6};
	
	Vector<float>v1;
	Vector<float>v2;
	
	v1=x;
	v2=y;
	
	float f =v1*v2;
	std::cout << f <<std::endl;
	return 0;
}
				
