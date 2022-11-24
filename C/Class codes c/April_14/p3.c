//void function call cannot be assigned 
//Function with no input

#include<stdio.h>

void printnum();

main(){
	int a;
	a=printnum();//error
	printf("The value of a is: %d\n",a);
}

void printnum(){
	printf("Addition = %d\n",2+3);
}
