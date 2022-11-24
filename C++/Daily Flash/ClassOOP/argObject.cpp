//pass object as function arguments 
//copy is passed
	
#include <iostream>
using namespace std;
class SUM{
	int var1,var2;
	
public: 	
	int sum;
	void getdata(){
		cout<< "Enter the two integers: ";
		cin >> var1 >>var2;
	}
	void display(){
		cout<< "SUM = "<<sum;
	}
	void add(SUM x);
};


 void SUM :: add(SUM x){
	x.sum = x.var1 + x.var2;
	x.display();
}



int main(){
	SUM m1,m2;
	m1.getdata();
	m2.add(m1);
}

