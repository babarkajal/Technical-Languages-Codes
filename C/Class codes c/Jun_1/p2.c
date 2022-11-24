#include<stdio.h>

void fun();

int c;//file scope

void main(){
	
	int a,b;//local scope
	printf("a and b have same scope\n");
	printf("They have local  scope\n");
	fun();
}

int d;//global scope

void fun(){
		
	printf("c and d have same scope\n");
	printf("They have global scope\n");
}
	
