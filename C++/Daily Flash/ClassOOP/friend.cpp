//friend function 

#include<iostream>
using namespace std;

class ABC{
	int var;
	
public :
	void getdata();
	friend void accessPrivate(ABC a);//declaration
};



void accessPrivate(ABC a){
	cout << "access using frined function: "<<endl;
	cin >> a.var;
	
	cout<< "print var= "<< a.var << endl;
}

main(){
	ABC a;
	accessPrivate(a);	

}

