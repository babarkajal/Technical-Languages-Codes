#include<stdio.h>

void fun();


void main(){
	
	int a=20;//local scope
	printf("The value of a in main is %d\n\n",a);
	
	fun();
}


void fun(){
		
	printf("The value of a in fun is %d\n\n",a);//error undeclared a
}
	
