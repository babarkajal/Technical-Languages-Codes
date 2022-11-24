#include <stdio.h>

void fun();

void main(){
	
	extern int a;//error
	printf("In main value is a = %d\n",a);
	fun();
}


