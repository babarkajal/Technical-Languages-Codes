//volatile varible

#include <iostream>


int main() {
	int x =10;
	const int y =20 , i= 50; //this will make all var const
	volatile int z=30;
	int const w=40 , j = 60;
	
	x=100;
	y=200; //assignment operation to read only var
	z=300;
	w=40;	//assignment of read only var i
	i=50;   //assignment of read only var
	j=60;
}
