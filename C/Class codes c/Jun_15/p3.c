//Assigning a structure object to a structure varible
//we can assign only the varibles of same structure type

#include<stdio.h>
struct XYZ{
	int x;
	double y;
};

struct XYZ{	//error:redefination od xyz
	int x;
	double y;
};



void main(){
		
	struct XYZ obj1={10,25.56};
	struct XYZ obj2=obj1;
}
	
	
