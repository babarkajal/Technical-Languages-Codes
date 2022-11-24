//manipulator 
#include<iostream>
#include<iomanip> //for setw
using namespace std;

int main(){
	int aNUM=1000,b=300,c=90;
	
	cout<<"without setw\n";
	cout<<"aNUm "<< aNUM <<endl;
	cout<<"b "<< b <<endl;
	cout<<"c "<< c <<endl;
		
	cout<<setw(5)<<"aNUm"<<setw(5)<<aNUM<<endl;
	cout<<setw(5)<<"b"<<setw(5)<<b<<endl;
	cout<<setw(5)<<"c"<<setw(5)<<c<<endl;
}
