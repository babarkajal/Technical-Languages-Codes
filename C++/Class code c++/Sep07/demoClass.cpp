#include <iostream>
using namespace std;


class A{
public:
	int a;
	int b;
	public:
		
		A(){
			a=30;
			cout <<"No args"<<endl;
		}
		A(int a){
			this->a=a;
			cout << a<< endl;
			cout << "para" <<endl;
		}
		void display(){
			cout << a << endl << b << endl;
		}

};


int main(){


	const A obj1;
	obj1.a=40;
	obj1.b=50;
 	A obj2=obj1;
	
	//cout <<obj1.a;
	
//	obj.display();

}


