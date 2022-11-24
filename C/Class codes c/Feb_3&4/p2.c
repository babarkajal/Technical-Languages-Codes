#include<stdio.h>

int a=10,b=20;

void fun();
void gun();

void main(){
	int c=30,d=30;//local varible
	printf("a=%d \tb=%d \n",a,b);
	printf("c=%d \td=%d \n",c,d);
	fun();
}
void fun(){
	int e=50,f=60;
	printf("a= %d\t b=%d \t c=%d\t d=%d\n",a,b,c,d);
	gun();
}
void gun(){
	int g=70,h=80;
	
	printf("g=%d\t h=%d\n",g,h);
}
