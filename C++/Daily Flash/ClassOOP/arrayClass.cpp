//array of class

#include <iostream>
using namespace std;

class Array{
	int var;
	
public: void getdata(int x){
		var=x;
	}
	void display(){
		cout<<"var = " << var << endl;
	}
};

main(){
	Array arr[5];
//accept data

	for(int i=0; i<5; i++){
		arr[i].getdata(i);
	}
	//dipslay
	for(int i=0; i<5; i++){
			
			arr[i].display();
	}
}	
	
