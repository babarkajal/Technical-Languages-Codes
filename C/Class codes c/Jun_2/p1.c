#include <stdio.h>

void fun();
	
void main(){
		extern int a;
		printf("a = %d\n",a);
		fun();
}

int a=10;//file scope	
