#include<iostream>
using namespace std;

//default argument
void fun(int ,int ,int c=30);

main(){
	fun(10,20);
}

void fun(int a, int b,int c){
	cout<<"Addition = "<<a+b+c<<endl;
}
