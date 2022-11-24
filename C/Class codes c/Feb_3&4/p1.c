//Global and local vaarible

#include<stdio.h>

//global varible
int x=10;
int y=20;

void fun();
void gun();
	
void main(){
	int a,b;//local varible
	a=100,b=200;
	printf("a=%d \tb=%d \tx=%d\n",a,b,x);
	fun();
}

void fun(){
	int c,d;//local varible
	c=30,d=40;
	printf("y= %d\n",y);
	gun();
}

void gun(){
	int m,n;//local varible
	m=80,n=x/y;
	printf("n=%d\n",n);
}
