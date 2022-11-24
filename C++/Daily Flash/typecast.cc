//typecast operator

#include<iostream>
using namespace std;

int main(){
	
	float i=10.10;

	
	//without typecast
	cout<<"value = "<<i<<endl;
	
	//with typecast using c++ style
	cout<<"value = "<<int(i)<<endl;

	//with typecast using c style
	cout<<"value = "<<(int)i<<endl;
}
