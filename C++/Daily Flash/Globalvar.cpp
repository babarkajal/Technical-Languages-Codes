
#include<iostream>
using namespace std;

int m=10;//global

int main(){
	
	int m=20;//local varible
	
	{
		int m=30;
		cout<<"we are in inner block\n";
		cout<<"local m="<<m<<endl;
		cout<<"global m="<<::m<<endl;	//access the global one
	}	
	
		cout<<"we are in outer block\n";
		cout<<"local  m="<<m<<endl;
		cout<<"global m="<<::m<<endl;
}
	
	
