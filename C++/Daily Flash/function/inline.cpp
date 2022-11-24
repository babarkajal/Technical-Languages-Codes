#include<iostream>
using namespace std;

inline float mul(float x,float y){
		return x*y;
}

main(){
	float a=2.1;
	float b=1;
	float ans=mul(a,b);//inline replaces fun call by code
	cout<<"result= "<<ans<<endl;
}
