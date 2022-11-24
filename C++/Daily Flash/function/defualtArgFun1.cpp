#include<iostream>
using namespace std;

//default argument

void fun(int a, int b=10,int c=30){
	cout<<"Addition = "<<a+b+c<<endl;
}
main(){
	fun(10);
}

