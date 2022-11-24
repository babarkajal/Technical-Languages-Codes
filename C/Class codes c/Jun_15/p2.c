//Assigning a structure object to a structure varible
//we can assign only the varibles of same structure type

#include<stdio.h>
struct XYZ{
	int x;
	double y;
};

struct PQR{
	int x;
	double y;
};



void main(){
		
	struct XYZ obj1={10,25.56};
	struct PQR obj2=obj1;//error
}
	
	
