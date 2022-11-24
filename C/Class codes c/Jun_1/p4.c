//Identical identifiers in the same scope but with diff datatypes

#include<stdio.h>

void main(){
	
	extern int a;
	extern char a;
	printf("The value of a is %d\n",a);
}

int a=20;
