

//extern 

#include <iostream>

char TV_channel[20]="Zee marathi";
void window();

int main() {
	extern int window; //not used so no error if used then linking error will be occured
	window();	

}


