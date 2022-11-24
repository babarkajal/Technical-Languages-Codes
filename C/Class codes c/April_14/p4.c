//Function with no input
//Printf() returns the successfull number of digits/characters are printed  
#include<stdio.h>

void printnum();

main(){
	int a;
	printnum();
	a=printf("Core@web Technologies");//prinf() returns number of arguments or characters within double quote  
	printf("\nThe value of a is: %d\n",a);
}

void printnum(){
	printf("Addition = %d\n",2+3);
}
