//non-identical identifiers in the same scope but with diff datatypes

#include<stdio.h>

void main(){
	
	extern int a;
	extern float b;
	printf("Non-identifier declaration in same scope\n");
	printf("The value of a is %d\n",a);
	printf("The value of b is %d\n",b);//error:undefined refernce to b
}

int a=20;
