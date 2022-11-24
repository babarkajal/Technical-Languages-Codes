//Addresses of union  

#include<stdio.h>

union varible {
		
		int a;
		char b;
		float c;
		
};


void main(){
		union varible var;//object	
		printf("Address of var: %p\n",&var);
		printf("Address of var.a: %p\n",&var.a);
		printf("Address of var.b: %p\n",&var.b);
		printf("Address of var.c: %p\n",&var.c);
		
}
