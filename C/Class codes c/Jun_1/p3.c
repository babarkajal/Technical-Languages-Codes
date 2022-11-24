//Identical identifiers in the same scope

#include<stdio.h>

void main(){
	
	extern int a;
	extern int a;
	printf("The value of a is %d\n",a);
}

int a=20;
