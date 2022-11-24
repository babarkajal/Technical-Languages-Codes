
//ambiguity error

#include<iostream>
using namespace std;

long sqaure(long n){
		
		cout<<"I am in functon long\n";
}
int sqaure(double n){
		
		cout<<"I am in functon double\n";
}

main(){
	sqaure(10);
}
