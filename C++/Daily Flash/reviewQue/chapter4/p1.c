#include<iostream>
using namespace std;

void display(const int const1=5){
	
		const int const2=5;
		int arr1[const1];
		
		for(int i=0;i<5;i++){
			arr1[i]=i;
			cout<<"array[i]"<<" "<<arr1[i]<<endl;
		}
}

main(){
	display();
}
	
