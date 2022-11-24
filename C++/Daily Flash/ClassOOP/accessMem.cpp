//access member of class
#include <iostream>
using namespace std;

class ABC{
	int var=10;
	
public:
	int var2;
	void display(){
		cout<<"var= "<< var <<endl;
		cout<<"var3= "<< var3 <<endl;
	}
protected: 
	int var3=30;
};

main(){
	ABC a;
	a.display();
	a.var2=20;
//	a.var3=20;
//	cout<<a.var<<endl; cannot access private member outside class

	cout<<"var2= " << a.var2<<endl;
//	cout<<a.var3<<endl; cannot access protected members outside the class
	
};

