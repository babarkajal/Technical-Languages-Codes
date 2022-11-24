#include <stdio.h>


int main(){
	
	auto int a;
	register int b;
	printf("&a= %p\n",&a);
	printf("&b= %p\n",&b);//error:we cannot access address of register
}
		
