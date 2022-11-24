//swap using refernce varible

#include <iostream>
using namespace std;
 
main(){
	int a=10,b=20;
	cout<<"before swap\n";
	cout<<a<<' '<<b<<endl;
	swap(a,b);
	cout<<"after swap\n";
	cout<<a<<' '<<b<<endl;
}


void swap(int &x,int &y){
		
			int temp=x;
			x=y;
			y=temp;
}
